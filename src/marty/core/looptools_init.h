// This file is part of MARTY.
// 
// MARTY is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// MARTY is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with MARTY. If not, see <https://www.gnu.org/licenses/>.

/*!
 * @file 
 * @author Grégoire Uhlrich
 * @version 1.3
 
 * \brief
 */
#ifndef LOOPTOOLS_INIT_H_INCLUDED
#define LOOPTOOLS_INIT_H_INCLUDED

#include "clooptools.h"

#ifdef __cplusplus
namespace mty {

    class LoopToolsInitializer {

        public: 

        static LoopToolsInitializer const& build() {
            static LoopToolsInitializer looptoolsInitializer;
            return looptoolsInitializer;
        }

        private:

        LoopToolsInitializer() {
            ltini();
        }

        ~LoopToolsInitializer() {
            ltexi();
        }
    };

    inline LoopToolsInitializer const& looptoolsInitializer 
        = LoopToolsInitializer::build();
}
#endif

#endif
