//
//  TagAdapter.h
//  TagON
//
//  Created by Önder ÖZCAN on 24/05/2017.
//  Copyright © 2017 NMOBS. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TagAdapter : NSObject
+(TagAdapter *)sharedManager;
-(void)initWithPublisherID:(NSString *)pubID inventoryID:(NSString *)invID;
+(BOOL)adapterIsReady;
//UserData when it's ready to collect.
//Fetch publisherID
+(NSString *)getPublisherID;
+(NSString *)getInvID;
+(NSString *)getContentURL;
//For test environment, setTest true.
+(void)setTest:(BOOL)test;
+(BOOL)isTest;
@end
