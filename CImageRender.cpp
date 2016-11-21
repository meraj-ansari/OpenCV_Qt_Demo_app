#include "CImageRender.h"
#include"errorcode.h"
#include"logging.h"
#include <fstream>

/**
* \brief Default C'tor
*
* \param[in] nothing
*
* \param[out] nothing
*
* \returns nothing
*
*/
CImageRender::CImageRender( )
{
    mstrImagePath = "";
    mcvImage = NULL;
}


/**
* \brief Single param C'tor
*
* \param[in] Incoming image path
*
* \param[out] nothing
*
* \returns nothing
*
*/
CImageRender::CImageRender( string strImagePath )
{
    mstrImagePath = strImagePath;
}

/**
* \brief Default D'tor
*
* \param[in] nothing
*
* \param[out] nothing
*
* \returns nothing
*
*/
CImageRender::~CImageRender( )
{
    mstrImagePath = "";
    mcvImage = NULL;
}


/**
* \brief Set image path 
*
* \param[in] strImagePath Absolute image path 
*
* \param[out] nothing
*
* \returns nothing
*
*/
void CImageRender::setImagePath( string strImagePath )
{
    F_IN;

    do
    {
        ASSERT_BREAK( (strImagePath.length() <= 0), "Incoming image path is invalid!!" );

        mstrImagePath = strImagePath;
        LD( ("Set image path : " << mstrImagePath) )


    } while (false);

    F_OUT;

}


/**
*  \brief Get image path which was already set by user
*
*  \param[in] nothing
*
*  \param[out] nothing
*
*  \returns valid Image path or null in case of error
*
*/
string CImageRender::getImagePath( )
{
    F_IN;
    
    string strImagePath = NULL;

    do
    {
        ASSERT_BREAK( (mstrImagePath.length() <= 0), "Pre configured image path is invalid!!" );
        strImagePath = mstrImagePath;

    } while (false);

    F_OUT;

    return strImagePath;
}


/**
* \brief Check image path is valid or not
*
* \param[in] none
*
* \param[out] nothing
*
* \returns true if image path is valid otherwise false
*
*/
bool CImageRender::isImageExist( )
{
    F_IN;

    bool status = true;

    do
    {
        ASSERT_BREAK_RETVAL( (mstrImagePath.length( ) <= 0), "Pre configured image path is invalid!!"; (status = false) );
        
        
        ifstream fin( mstrImagePath );
        if (fin)
        {           
            status = true;
            fin.close();

            LD( "File exist at mentioned path." );
        }

    } while (false);

    F_OUT;

    return status;
}


/**
* \brief Load image from the pre set image path and create the open cv image data
*
* \param[in] nothing
*
* \param[out] nothing
*
* \returns SUCCESS(0) if everything is fine or error codes(FAILURE(1) etc)
*
*/
int CImageRender::loadImageAndCreateOCVData( )
{
    F_IN;

    int erroCode = ENO_SUCCESS;

    do
    {
        ASSERT_BREAK_RETVAL( (mstrImagePath.length( ) <= 0), "Pre configured image path is invalid!!", (erroCode = ENO_IMAGE_PATH_INVALID) );

        mcvImage = imread( mstrImagePath, CV_LOAD_IMAGE_GRAYSCALE );
        
        //ASSERT_BREAK_RETVAL( (mcvImage.), "Can not create OCV image data from pre configured path !!", (erroCode = ENO_IMAGE_DATA_INVALID) );


    } while (false);

    F_OUT;

    return erroCode;

}


/**
* \brief Render image in open CV Window. Image data constructed from pre set image path will be used.
*
* \param[in] nothing
*
* \param[out] nothing
*
* \returns SUCCESS(0) if everything is fine or error codes(FAILURE(1) etc)
*
*/
int CImageRender::renderImageinOCVWindow( )
{
    F_IN;

    int erroCode = ENO_SUCCESS;

    do
    {
        namedWindow( WINDOW_NAME, WINDOW_AUTOSIZE ); // Create a window for display.
        imshow( WINDOW_NAME, mcvImage ); // Show our image inside it.
        waitKey();


    } while (false);

    F_OUT;

    return erroCode;
}