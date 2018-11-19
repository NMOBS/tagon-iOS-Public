//
//  TagAdapter.h
//  TagON
//
//  Created by Önder ÖZCAN.
//  Copyright © 2018 NMOBS. All rights reserved.
//  Version 0.1.4

#import <Foundation/Foundation.h>

@interface TagAdapter : NSObject
+(TagAdapter *)sharedManager;
-(void)initWithPublisherID:(NSString *)pubID inventoryID:(NSString *)invID;
+(BOOL)adapterIsReady;
//UserData when it's ready to collect.

//Fetch publisherID
+(NSString *)getPublisherID;
+(NSString *)getInvID;

//Default Content URL
+(void)setDefaultContentURL:(NSString *)defaultURL;
+(NSString *)getDefaultContentURL;
//For test environment, setTest true.

+(void)setTest:(BOOL)test;
+(BOOL)isTest;
@end
