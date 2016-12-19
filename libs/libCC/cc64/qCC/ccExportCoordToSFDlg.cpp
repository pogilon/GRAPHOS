//##########################################################################
//#                                                                        #
//#                            CLOUDCOMPARE                                #
//#                                                                        #
//#  This program is free software; you can redistribute it and/or modify  #
//#  it under the terms of the GNU General Public License as published by  #
//#  the Free Software Foundation; version 2 of the License.               #
//#                                                                        #
//#  This program is distributed in the hope that it will be useful,       #
//#  but WITHOUT ANY WARRANTY; without even the implied warranty of        #
//#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         #
//#  GNU General Public License for more details.                          #
//#                                                                        #
//#          COPYRIGHT: EDF R&D / TELECOM ParisTech (ENST-TSI)             #
//#                                                                        #
//##########################################################################
//
//*********************** Last revision of this file ***********************
//$Author:: dgm                                                            $
//$Rev:: 1631                                                              $
//$LastChangedDate:: 2010-08-25 07:21:40 +0200 (mer., 25 août 2010)       $
//**************************************************************************
//

#include "ccExportCoordToSFDlg.h"

ccExportCoordToSFDlg::ccExportCoordToSFDlg(QWidget* parent/*=0*/)
	: QDialog(parent)
	, Ui::ExportCoordToSFDlg()
{
    setupUi(this);

    setWindowFlags(Qt::Tool);
}

bool ccExportCoordToSFDlg::exportX() const
{
	return xCheckBox->isChecked();
}

bool ccExportCoordToSFDlg::exportY() const
{
	return yCheckBox->isChecked();
}

bool ccExportCoordToSFDlg::exportZ() const
{
	return zCheckBox->isChecked();
}