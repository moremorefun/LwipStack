#ifndef lwip_h
#define lwip_h

#import <Foundation/Foundation.h>
#if TARGET_OS_IPHONE
#import <UIKit/UIKit.h>
#else
#import <Cocoa/Cocoa.h>
#endif

//! Project version number for lwip.
FOUNDATION_EXPORT double lwipVersionNumber;

//! Project version string for lwip.
FOUNDATION_EXPORT const unsigned char lwipVersionString[];



#endif /* lwip_h */
