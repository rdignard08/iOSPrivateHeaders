
@interface UIVirtualResizeAction : BSAction {

}

 - (long long) UIActionType;
 - ({CGSize=dd}) virtualSize;
 - (long long) virtualHorizontalSizeClass;
 - (long long) virtualVerticalSizeClass;
 - (id) initWithVirtualSize:({CGSize=dd})a virtualHorizontalSizeClass:(long long)b virtualVerticalSizeClass:(long long)c ;
 - (id) initWithInfo:(id)a timeout:(double)b forResponseOnQueue:(id)c withHandler:(@?)d ;
 - (id) keyDescriptionForSetting:(unsigned long long)a ;


@end
