
@interface UIImageView : UIView {

    id _storage;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _cachedEdgeInsetsForEffects;
    BOOL _templateSettingsAreInvalid;
    BOOL _edgeInsetsForEffectsAreValid;
    BOOL __animatesContents;
}
 + (id) sharedImageCache;
 + (void) setSharedImageCache:(id)a;
 + (id) af_sharedImageRequestOperationQueue;

 - (id) imageResponseSerializer;
 - (void) setImageWithURL:(id)aplaceholderImage:(id)b;
 - (void) setImageWithURLRequest:(id)aplaceholderImage:(id)bsuccess:(@?)cfailure:(@?)d;
 - (void) cancelImageRequestOperation;
 - (void) setImageResponseSerializer:(id)a;
 - (void) setImageWithURL:(id)a;
 - (id) af_imageRequestOperation;
 - (void) af_setImageRequestOperation:(id)a;
 - (void) dealloc;
 - ({CGSize=dd}) _intrinsicSizeWithinSize:({CGSize=dd})a;
 - (void) layoutSubviews;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a;
 - (void) setTranslatesAutoresizingMaskIntoConstraints:(BOOL)a;
 - (void) encodeRestorableStateWithCoder:(id)a;
 - (void) decodeRestorableStateWithCoder:(id)a;
 - ({UIEdgeInsets=dddd}) alignmentRectInsets;
 - (^{CGImage=}) imageRef;
 - (BOOL) _shouldAnimatePropertyWithKey:(id)a;
 - (BOOL) useBlockyMagnificationInClassic;
 - (BOOL) _canDrawContent;
 - (void) traitCollectionDidChange:(id)a;
 - (id) _generateBackdropMaskImage;
 - (void) tintColorDidChange;
 - (void) _didMoveFromWindow:(id)atoWindow:(id)b;
 - (void) setAnimationRepeatCount:(q)a;
 - (void) setHighlighted:(BOOL)a;
 - (Q) _templateImageRenderingEffects;
 - (void) _setDefaultRenderingMode:(q)a;
 - (void) _setTemplateImageRenderingEffects:(Q)a;
 - (BOOL) isHighlighted;
 - (id) animationImages;
 - (id) highlightedAnimationImages;
 - (id) highlightedImage;
 - (void) setHighlightedImage:(id)a;
 - (q) _defaultRenderingMode;
 - (BOOL) _masksTemplateImages;
 - (id) _currentImage;
 - (id) _currentHighlightedImage;
 - (BOOL) _shouldDrawImage:(id)a;
 - (id) _cachedPretiledImageForImage:(id)a;
 - (BOOL) _needsImageEffectsForImage:(id)a;
 - (id) _effectiveTintColorWithImage:(id)a;
 - (BOOL) _needsImageEffectsForImage:(id)asuppressColorizing:(BOOL)b;
 - (void) _drawImageEffectsForImage:(id)ainRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (BOOL) isAnimating;
 - (BOOL) _setImageViewContents:(id)a;
 - (void) _setDecompressingImage:(id)aforType:(Q)b;
 - (void) stopAnimating;
 - (void) _clearPretiledImageCacheForImage:(id)a;
 - (void) _updateImageViewForOldImage:(id)anewImage:(id)b;
 - (void) _updatePretiledImageCacheForImage:(id)a;
 - (void) _updateState;
 - (void) _updateTemplateProperties;
 - (BOOL) _recomputePretilingState;
 - (void) _setViewGeometry:({CGRect={CGPoint=dd}{CGSize=dd}})aforMetric:(i)b;
 - ({UIEdgeInsets=dddd}) _edgeInsetsForEffects;
 - (id) _activeImage;
 - (id) _decompressingImageForType:(Q)a;
 - (BOOL) _shouldTreatImageAsTemplate:(id)a;
 - (void) _updateMasking;
 - (void) _templateSettingsDidChange;
 - (void) _invalidateTemplateSettings;
 - (void) _resolveImageForTrait:(id)a;
 - (void) startAnimating;
 - (BOOL) _animatesContents;
 - (id) _adaptiveImageForImage:(id)aassignedImage:(id)bcurrentImage:(id)chasAdapted:(^B)d;
 - (id) initWithImage:(id)ahighlightedImage:(id)b;
 - (void) setAnimationImages:(id)a;
 - (void) setHighlightedAnimationImages:(id)a;
 - (q) animationRepeatCount;
 - (void) _setMasksTemplateImages:(BOOL)a;
 - (i) drawMode;
 - (void) setDrawMode:(i)a;
 - (void) setCGImageRef:(^{CGImage=})a;
 - (void) setAnimating:(BOOL)a;
 - (id) _checkImageForAdaptation:(id)ahasAdapted:(^B)b;
 - (id) _checkHighlightedImageForAdaptation:(id)ahadAdapted:(^B)b;
 - (BOOL) _templateSettingsAreInvalid;
 - (BOOL) _edgeInsetsForEffectsAreValid;
 - (void) _setEdgeInsetsForEffectsAreValid:(BOOL)a;
 - (void) _setAnimatesContents:(BOOL)a;
 - (Q) defaultAccessibilityTraits;
 - (BOOL) isAccessibilityElementByDefault;
 - (BOOL) isElementAccessibilityExposedToInterfaceBuilder;
 - (void) _applySettingsForLegibilityStyle:(q)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) setBackgroundColor:(id)a;
 - (void) setImage:(id)a;
 - (id) initWithImage:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (d) animationDuration;
 - (id) image;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setAnimationDuration:(d)a;


@end