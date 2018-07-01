//
//  TagFullPageImageView.h
//  TagON
//
//  Created by Önder ÖZCAN on 31/05/2017.
//  Copyright © 2017 pixelblind. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class TagFullPageImageView;

@protocol TagFullPageImageViewDelegate <NSObject>

@optional
#pragma mark if advertisement loaded successfull this method will be fire.
- (void)AdvertisementLoaded:(NSInteger)bannerTag;

#pragma mark if advertisement coud not loaded this method will be fire.
- (void)AdvertisementLoadFailed;

@end

@interface TagFullPageImageView : UIViewController<UIGestureRecognizerDelegate>
@property (nonatomic, weak) id<TagFullPageImageViewDelegate> delegate;

-(id)initWithInventoryID:(NSString *)invID andAdUnitID:(NSString *)adUnitID andContentUrl:(NSString *)contentURL;//Old

-(id)initWithAdUnitID:(NSString *)adunit_id andContentUrl:(NSString *)contentURL;

-(void)setViewController:(UIViewController *)vc;

+(NSString *)getContentURL;


@end
