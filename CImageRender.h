#ifndef __CIMAGE__READER__
#define __CIMAGE__READER__

#include"constant.h"

class CImageRender
{
	private:
        const string WINDOW_NAME = "Display window";
		string mstrImagePath;
        Mat mcvImage;

	public:
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
        CImageRender( );

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
        CImageRender( string strImagePath );
        
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
        ~CImageRender( );

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
		void setImagePath(string strImagePath);

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
		string getImagePath();

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
		bool isImageExist();

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
        int loadImageAndCreateOCVData( );

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
        int renderImageinOCVWindow( );
};

#endif