/******************************************************************************
**
** Copyright 2009-2020 Gunjou Inc. All rights reserved.
** Contact: Gunjou Inc. (aoiduino@gunjou.co.jp)
**
******************************************************************************/
#include "base-abstractbase.h"
#include "product-template.h"
/**
 * @namespace AoiProduct
 * @brief Aoi product classes.
 */
namespace AoiProduct
{
    /**
     * @fn Template::Template( void )
     *
     * Constructor. Member variables are initialized.
     */
    Template::Template( void )
    {
    }
    /**
     * @fn Template::~Template( void )
     *
     * Destructor. Member variables are deleted.
     */
    Template::~Template( void )
    {
    }
    /**
     * @fn String Template::setup( void )
     *
     * This method is called from main program, setup().
     *
     * @return Returned value will be shown in console.
     */
    String Template::setup( void )
    {
        return "";
    }
    /**
     * @fn String Template::loop( void )
     *
     * This method is called from main program, internalLoop().
     *
     * @return Returned value will be shown in console.
     */
    String Template::loop( void )
    {
        return "";
    }
}