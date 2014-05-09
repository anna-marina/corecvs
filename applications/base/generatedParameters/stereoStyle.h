#ifndef STEREO_STYLE_H_
#define STEREO_STYLE_H_
/**
 * \file stereoStyle.h
 * \attention This file is automatically generated and should not be in general modified manually
 *
 * \date MMM DD, 20YY
 * \author autoGenerator
 */

/**
 * Helper namespace to hide StereoStyle enum from global context.
 */

namespace StereoStyle {

/** 
 * \brief Stereo Style 
 * Stereo Style 
 */
enum StereoStyle {
    /** 
     * \brief dont show stereo 
     * don't show stereo 
     */
    DONT_SHOW_STEREO = 0,
    /** 
     * \brief fast large dots 
     * fast large dots 
     */
    FAST_LARGE_DOTS = 1,
    /** 
     * \brief fast dots 
     * fast dots 
     */
    FAST_DOTS = 2,
    /** 
     * \brief show lines stereo 
     * show lines stereo 
     */
    SHOW_LINES_STEREO = 3,
    /** 
     * \brief show all stereo 
     * show all stereo 
     */
    SHOW_ALL_STEREO = 4,
    /** 
     * \brief show dots stereo 
     * show dots stereo 
     */
    SHOW_DOTS_STEREO = 5,
    /** 
     * \brief Last virtual option to run cycles to
     */
    STEREO_STYLE_LAST
};


static inline const char *getName(const StereoStyle &value)
{
    switch (value) 
    {
     case DONT_SHOW_STEREO : return "DONT_SHOW_STEREO"; break ;
     case FAST_LARGE_DOTS : return "FAST_LARGE_DOTS"; break ;
     case FAST_DOTS : return "FAST_DOTS"; break ;
     case SHOW_LINES_STEREO : return "SHOW_LINES_STEREO"; break ;
     case SHOW_ALL_STEREO : return "SHOW_ALL_STEREO"; break ;
     case SHOW_DOTS_STEREO : return "SHOW_DOTS_STEREO"; break ;
     default : return "Not in range"; break ;
     
    }
    return "Not in range";
}

} //namespace StereoStyle

#endif  //STEREO_STYLE_H_
