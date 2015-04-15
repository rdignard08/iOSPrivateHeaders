
@protocol _UIAppearanceContainer;
@interface UIDeviceAppearanceContainer : NSObject <_UIAppearanceContainer> {

}
 + (BOOL) _preventsAppearanceProxyCustomization;

 - (id) _appearanceContainer;
 - (id) _appearanceGuideClass;


@end
