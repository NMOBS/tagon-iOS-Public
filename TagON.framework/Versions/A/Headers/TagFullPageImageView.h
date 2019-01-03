//
//  TagFullPageImageView.h
//  TagON
//
//  Created by Önder ÖZCAN on 2018
//
@import UIKit;
#import "TagAdapter.h"

@class TagFullPageImageView;
@protocol TagFullPageImageViewDelegate <NSObject>

@optional
#pragma mark if advertisement loaded successfull this method will be fire.
- (void)AdvertisementLoaded;

#pragma mark if advertisement coud not loaded this method will be fire.
- (void)AdvertisementLoadFailed;

@end

@interface TagFullPageImageView : UIViewController<UIGestureRecognizerDelegate>
@property (nonatomic, weak) id<TagFullPageImageViewDelegate> delegate;

-(id)initWithAdUnitID:(NSString *)adunit_id andContentUrl:(NSString *)contentURL;
-(BOOL)isAdvertisementReady;
-(void)displayAdWithController:(UIViewController *)vc;
+(NSString *)getContentURL;

@end
