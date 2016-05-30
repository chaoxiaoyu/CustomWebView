//
//  JSExportsManager+platformAndVersion.h
//  XTWebView
//
//  Created by abc on 19/4/16.
//  Copyright © 2016年 com.xiangtian. All rights reserved.
//

#import "JSExportManager.h"
#import <JavaScriptCore/JavaScriptCore.h>

@protocol platformAndVersion <JSExport>

- (NSString *)platform;
- (NSString *)hostVersion;
- (NSString *)version;

@end

@interface JSExportManager (platformAndVersion)<platformAndVersion>

@end
