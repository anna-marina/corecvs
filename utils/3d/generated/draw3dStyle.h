#ifndef DRAW_3D_STYLE_H_
#define DRAW_3D_STYLE_H_
/**
 * \file draw3dStyle.h
 * \attention This file is automatically generated and should not be in general modified manually
 *
 * \date MMM DD, 20YY
 * \author autoGenerator
 */

/**
 * Helper namespace to hide Draw3dStyle enum from global context.
 */

namespace Draw3dStyle {

/** 
 * \brief draw 3d Style 
 * draw 3d Style 
 */
enum Draw3dStyle {
    /** 
     * \brief Points 
     * Points 
     */
    POINTS = 0,
    /** 
     * \brief Wireframe 
     * Wireframe 
     */
    WIREFRAME = 1,
    /** 
     * \brief Color 
     * Color 
     */
    COLOR = 2,
    /** 
     * \brief Color 2 
     * Color 2 
     */
    COLOR_2 = 3,
    /** 
     * \brief Textured 
     * Textured 
     */
    TEXTURED = 4,
    /** 
     * \brief Last virtual option to run cycles to
     */
    DRAW_3D_STYLE_LAST
};


static inline const char *getName(const Draw3dStyle &value)
{
    switch (value) 
    {
     case POINTS : return "POINTS"; break ;
     case WIREFRAME : return "WIREFRAME"; break ;
     case COLOR : return "COLOR"; break ;
     case COLOR_2 : return "COLOR_2"; break ;
     case TEXTURED : return "TEXTURED"; break ;
     default : return "Not in range"; break ;
     
    }
    return "Not in range";
}

} //namespace Draw3dStyle

#endif  //DRAW_3D_STYLE_H_
