//***************************************************************************
//
//  Copyright (c) 1999 - 2006 Intel Corporation
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//
//***************************************************************************

/**
@file MaterialResourceList.h

This header defines the ... functionality.

@note
*/


#ifndef MaterialResourceList_H
#define MaterialResourceList_H

//***************************************************************************
//  Includes
//***************************************************************************

#include "IFXArray.h"
#include "ResourceList.h"
#include "MaterialResource.h"

namespace U3D_IDTF
{
	//***************************************************************************
	//  Defines
	//***************************************************************************


	//***************************************************************************
	//  Constants
	//***************************************************************************


	//***************************************************************************
	//  Enumerations
	//***************************************************************************


	//***************************************************************************
	//  Classes, structures and types
	//***************************************************************************

	/**
	This is the implementation of a class that is used to @todo: usage.

	It supports the following interfaces:  @todo: interfaces.
	*/
	class MaterialResourceList : public ResourceList
	{
	public:
		MaterialResourceList() {};
		virtual ~MaterialResourceList() {};

		/**
		*/
		void AddResource( const Material& rResource );

		/**
		*/
		const Material& GetResource( U32 index ) const;
		U32 GetResourceCount() const;

	private:
		IFXArray< Material > m_resourceList;
	};

	//***************************************************************************
	//  Inline functions
	//***************************************************************************

	IFXFORCEINLINE void MaterialResourceList::AddResource( const Material& rResource )
	{
		Material& resource = m_resourceList.CreateNewElement();
		resource = rResource;
	}

	IFXFORCEINLINE const Material& MaterialResourceList::GetResource( U32 index ) const
	{
		return m_resourceList.GetElementConst( index );
	}

	IFXFORCEINLINE U32 MaterialResourceList::GetResourceCount() const
	{
		return m_resourceList.GetNumberElements();
	}

	//***************************************************************************
	//  Global function prototypes
	//***************************************************************************


	//***************************************************************************
	//  Global data
	//***************************************************************************
}

#endif
