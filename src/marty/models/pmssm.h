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
 * @version 2.0

 * \brief
 */
#ifndef PMSSM_H_INCLUDED
#define PMSSM_H_INCLUDED

#include "mssm.h"

namespace mty {

class PMSSM_Model : public MSSM_Model {

  public:
    PMSSM_Model(std::string const &saveFile = "", bool init = true);

  protected:
    void approximateYukawa();
    void approximateInputMatrices();
    void approximateQuarkMasses();
    void approximateCKM();
    void approximateSFermionMixings();
    void renameSFermions();
    void getToLowEnergyLagrangian();

    void addAllowedMixing(std::vector<std::string> const &names);
    void mergeAllowedMixings();
    bool isSuppressedMixing(mty::InteractionTerm const &massTerm) const;

  protected:
    std::vector<std::set<std::string>> allowedMixings;
};

} // End of namespace mty

#endif
