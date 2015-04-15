
@interface UIClassicWindow : UIWindow {

}

 - (BOOL) _shouldZoom;
 - (BOOL) _isConstrainedByScreenJail;
 - (void) _updateTransformLayerForClassicPresentation;


@end
