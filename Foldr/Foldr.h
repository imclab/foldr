//
//  Foldr.h
//  Foldr
//
//  Created by Vladimir Katardjiev on 2013-09-28.
//  Copyright (c) 2013 d2dx. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "File.h"

@interface Foldr : NSObject

+ (Foldr*) instance;

- (void) testLogin;
//- (void) uploadItem: (File*) item;
- (void) itemCreated: (File*)item atPath: (NSString *)path;

@end
