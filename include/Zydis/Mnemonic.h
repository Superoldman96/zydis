/***************************************************************************************************

  Zyan Disassembler Engine (Zydis)

  Original Author : Florian Bernd

 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.

***************************************************************************************************/

#ifndef ZYDIS_MNEMONIC_H
#define ZYDIS_MNEMONIC_H

#include <stdint.h>
#include <Zydis/Defines.h>
#include <Zydis/Status.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ============================================================================================== */
/* Enums and types                                                                                */
/* ============================================================================================== */

/**
 * @brief   Defines the @c ZydisInstructionMnemonic datatype.
 */
typedef uint16_t ZydisInstructionMnemonic;

/**
 * @brief   Values that represent zydis instruction-mnemonics.
 */
enum ZydisInstructionMnemonics
{
#include <Zydis/Internal/Mnemonics.inc>    
};

/* ============================================================================================== */
/* Exported functions                                                                             */
/* ============================================================================================== */

/**
 * @brief   Returns the specified instruction mnemonic string.
 *          
 * @param   mnemonic    The mnemonic.
 *                      
 * @return  The instruction mnemonic string or @c NULL, if an invalid mnemonic was passed.
 */
ZYDIS_DLLEXTERN const char* ZydisMnemonicGetString(ZydisInstructionMnemonic mnemonic);

/**
 * @brief   Replaces the string representation of the given mnemonic with a new value.
 *
 * @param   mnemonic        The mnemonic.
 * @param   mnemonicString  The new mnemonic string. Use @c NULL to restore default value.
 *
 * @return  A zydis status code.
 */
ZYDIS_DLLEXTERN ZydisStatus ZydisMnemonicReplaceString(ZydisInstructionMnemonic mnemonic, 
    const char* mnemonicString);

/* ============================================================================================== */

#ifdef __cplusplus
}
#endif

#endif /* ZYDIS_MNEMONIC_H */