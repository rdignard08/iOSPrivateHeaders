
@interface _UIImageViewExtendedStorage : NSObject {

    BOOL _highlighted;
    UIImage* _image;
    UIImage* _highlightedImage;
    NSArray* _animationImages;
    NSArray* _highlightedAnimationImages;
    double _animationDuration;
    long long _animationRepeatCount;
    int _drawMode;
    long long _defaultRenderingMode;
    BOOL _masksTemplateImages;
    unsigned long long _templateImageRenderingEffects;
    UIImage* _displayedImage;
    UIImage* _displayedHighlightedImage;
}

 - (void) dealloc;
 - (void) animationDidStop:(id)afinished:(BOOL)b;


@end
