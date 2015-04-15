
@interface UIVirtualResizeAction : BSAction {

}

 - (q) UIActionType;
 - ({CGSize=dd}) virtualSize;
 - (q) virtualHorizontalSizeClass;
 - (q) virtualVerticalSizeClass;
 - (id) initWithVirtualSize:({CGSize=dd})avirtualHorizontalSizeClass:(q)bvirtualVerticalSizeClass:(q)c;
 - (id) initWithInfo:(id)atimeout:(d)bforResponseOnQueue:(id)cwithHandler:(@?)d;
 - (id) keyDescriptionForSetting:(Q)a;


@end
