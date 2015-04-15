
@interface _UIImageViewExtendedStorage : NSObject {

    BOOL _highlighted;
    @"UIImage" _image;
    @"UIImage" _highlightedImage;
    @"NSArray" _animationImages;
    @"NSArray" _highlightedAnimationImages;
    d _animationDuration;
    q _animationRepeatCount;
    i _drawMode;
    q _defaultRenderingMode;
    BOOL _masksTemplateImages;
    Q _templateImageRenderingEffects;
    @"UIImage" _displayedImage;
    @"UIImage" _displayedHighlightedImage;
}

 - (void) dealloc;
 - (void) animationDidStop:(id)afinished:(BOOL)b;


@end
