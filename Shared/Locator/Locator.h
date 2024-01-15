//
// --------------------------------------------------------------------------
// Objects.h
// Created for Mac Mouse Fix (https://github.com/noah-nuebling/mac-mouse-fix)
// Created by Noah Nuebling in 2021
// Licensed under the MMF License (https://github.com/noah-nuebling/mac-mouse-fix/blob/master/License)
// --------------------------------------------------------------------------
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Locator : NSObject
+ (NSInteger)bundleVersion;
+ (NSString *)bundleVersionShort;
//+ (NSString *)currentBundleID;
+ (NSBundle *)mainAppBundle;
+ (NSBundle *)helperBundle;
+ (NSBundle *)mainAppOriginalBundle;
+ (NSBundle *)helperOriginalBundle;
+ (NSURL *)currentExecutableURL;
+ (NSURL *)MFApplicationSupportFolderURL;
+ (NSURL *)configURL;
+ (NSURL *)launchdPlistURL;
+ (NSUserDefaults *)defaults;
@end

NS_ASSUME_NONNULL_END
