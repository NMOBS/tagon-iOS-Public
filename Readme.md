# TagON iOS
![NSDK logo](http://tagon.co/images/tagON_logo_black.png)

[![Version](https://img.shields.io/cocoapods/v/TagON.svg?style=flat)](https://cocoapods.org//pods/TagON)
[![License](https://img.shields.io/cocoapods/l/TagON.svg?style=flat)](http://cocoapods.org/pods/TagON)

**TagON IOS SDK** is an all-in-one package, advertisement management SDK that includes programmatic buying solutions and data integration. The product **TagON iOS SDK** provides amazing opportunities to the publishers and some of them are targeting, interaction, various ad models and programmatic technologies in order to increase revenue.

* **Getting Started**
* **TagON SDK Implementation**
* **Integrating Ads**
	1. **FullPage**
	
## <a name="getting_started"></a> Getting Started
### With pod
```
 pod 'TagON'
```
### Also you can implement the framework manually 

* **Drag** the framework file "**TagON.framework**" in to your project
* **Drag** the bundle file "**TagON.bundle**" in to your project
* Make sure the static library has added in your project's target -> Build Phases -> Link with Libraries ->  **libTagON.a**

## <a name="getting_started"></a> TagOn SDK Implementation
In your **appDelegate** import TagON adapter class :

```
 #import <TagON/TagAdapter.h>
```

After import TagON Adapter header into Appdelegate, initialiaze TagAdapter sharedManeger with your PublisherID and the Inventory ID that given by TagON. 

Also you may want to set **default**-content-**URL** instead of request ad in **non-relational** UI (Like: Mainpage or any other non-content relational screens.)

```
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {

    [[TagAdapter sharedManager] initWithPublisherID:@"#publisherID#" inventoryID:@"#inventoryID#"];
    
    [TagAdapter setDefaultContentURL:@"https://www.nmobs.com"];

	return YES;
}
```

###You can also run TagAdapter on test environment for displaying test ad every single request.:

```
    [TagAdapter setTest:YES];

```

# AD Integration
### <a name="implementation"></a> Fullpage

* Import Fullpage Ad into your View Controller .m file 
 
```
 #import <TagON/TagFullPageImageView.h>
```

In your viewWillAppear or your custom method right after a View Controller has been invoked, initialize TagFullPageImageView class:

```    
    TagFullPageImageView *tagBanner = [[TagFullPageImageView alloc] initWithAdUnitID:@"#adUnitID#" andContentUrl:@"https://www.nmobs.com"];
        
    tagBanner.delegate = self;
    
```

 **Delegation**
	
TagFullPageImageView also keeps tracks regarding advertisement has been shown or failed.

```
@interface ViewController ()<TagFullPageImageViewDelegate>

```

When declaring TagFullPageImageView, set delegate self.

```
 tagBanner.delegate = self;       

```

 **Delegation Methods**

```
-(void)AdvertisementLoadFailed{
    NSLog(@"Advertisement failed");
}
```

```
-(void)AdvertisementLoaded{  
    NSLog(@"Advertisement Loaded Successfull");
}
```