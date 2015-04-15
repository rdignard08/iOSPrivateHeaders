
@protocol CAPropertyInfo, NSCoding, CAMediaTiming;
@interface CALayer : NSObject <CAPropertyInfo, NSCoding, CAMediaTiming> {

    {_CALayerIvars="refcount"i"magic"I"layer"^v} _attr;
}
@property (atomic, copy, readwrite) NSArray* states;
@property (atomic, copy, readwrite) NSArray* stateTransitions;
@property (atomic, assign, readonly) NSNumber* visibleRect;
@property (atomic, copy, readwrite) CAMeshTransform* meshTransform;
@property (atomic, assign, readwrite) NSNumber* needsLayoutOnGeometryChange;
@property (atomic, assign, readwrite) NSNumber* canDrawConcurrently;
@property (atomic, assign, readwrite) NSNumber* acceleratesDrawing;
@property (atomic, assign, readwrite, getter=isFrozen) NSNumber* frozen;
@property (atomic, assign, readwrite) NSNumber* allowsHitTesting;
@property (atomic, assign, readwrite) NSNumber* hitTestsAsOpaque;
@property (atomic, assign, readwrite) NSNumber* clearsContext;
@property (atomic, assign, readwrite) NSNumber* contentsOpaque;
@property (atomic, assign, readwrite) NSNumber* literalContentsCenter;
@property (atomic, copy, readwrite) NSString* contentsScaling;
@property (atomic, assign, readwrite) NSNumber* contentsTransform;
@property (atomic, assign, readwrite) NSNumber* invertsShadow;
@property (atomic, assign, readwrite) NSNumber* shadowPathIsBounds;
@property (atomic, assign, readwrite) NSNumber* swapsMaskAndLayer;
@property (atomic, retain, readwrite) NSNumber* cornerContents;
@property (atomic, assign, readwrite) NSNumber* cornerContentsCenter;
@property (atomic, assign, readwrite) NSNumber* maskedCorners;
@property (atomic, assign, readwrite) NSNumber* sortsSublayers;
@property (atomic, assign, readwrite) NSNumber* preloadsCache;
@property (atomic, assign, readwrite) NSNumber* rasterizationPrefersDisplayCompositing;
@property (atomic, assign, readwrite) NSNumber* allowsGroupBlending;
@property (atomic, assign, readwrite) NSNumber* allowsDisplayCompositing;
@property (atomic, assign, readwrite) NSNumber* sizeRequisition;
@property (atomic, assign, readwrite) NSNumber* backgroundColorPhase;
@property (atomic, copy, readwrite) NSArray* lights;
@property (atomic, assign, readwrite) NSNumber* acceptsLights;
@property (atomic, assign, readwrite) NSNumber* ambientReflectance;
@property (atomic, assign, readwrite) NSNumber* diffuseReflectance;
@property (atomic, assign, readwrite) NSNumber* specularReflectance;
@property (atomic, assign, readwrite) NSNumber* shininess;
@property (atomic, assign, readwrite) NSNumber* metallicity;
@property (atomic, copy, readwrite) NSArray* behaviors;
@property (atomic, assign, readwrite) NSNumber* velocityStretch;
@property (atomic, assign, readwrite) NSNumber* mass;
@property (atomic, assign, readwrite) NSNumber* momentOfInertia;
@property (atomic, assign, readwrite) NSNumber* coefficientOfRestitution;
@property (atomic, assign, readwrite) NSNumber* bounds;
@property (atomic, assign, readwrite) NSNumber* position;
@property (atomic, assign, readwrite) NSNumber* zPosition;
@property (atomic, assign, readwrite) NSNumber* anchorPoint;
@property (atomic, assign, readwrite) NSNumber* anchorPointZ;
@property (atomic, assign, readwrite) NSNumber* transform;
@property (atomic, assign, readwrite) NSNumber* frame;
@property (atomic, assign, readwrite, getter=isHidden) NSNumber* hidden;
@property (atomic, assign, readwrite, getter=isDoubleSided) NSNumber* doubleSided;
@property (atomic, assign, readwrite, getter=isGeometryFlipped) NSNumber* geometryFlipped;
@property (atomic, assign, readonly) CALayer* superlayer;
@property (atomic, copy, readwrite) NSArray* sublayers;
@property (atomic, assign, readwrite) NSNumber* sublayerTransform;
@property (atomic, retain, readwrite) CALayer* mask;
@property (atomic, assign, readwrite) NSNumber* masksToBounds;
@property (atomic, retain, readwrite) NSNumber* contents;
@property (atomic, assign, readwrite) NSNumber* contentsRect;
@property (atomic, copy, readwrite) NSString* contentsGravity;
@property (atomic, assign, readwrite) NSNumber* contentsScale;
@property (atomic, assign, readwrite) NSNumber* contentsCenter;
@property (atomic, copy, readwrite) NSString* minificationFilter;
@property (atomic, copy, readwrite) NSString* magnificationFilter;
@property (atomic, assign, readwrite) NSNumber* minificationFilterBias;
@property (atomic, assign, readwrite, getter=isOpaque) NSNumber* opaque;
@property (atomic, assign, readwrite) NSNumber* needsDisplayOnBoundsChange;
@property (atomic, assign, readwrite) NSNumber* drawsAsynchronously;
@property (atomic, assign, readwrite) NSNumber* edgeAntialiasingMask;
@property (atomic, assign, readwrite) NSNumber* allowsEdgeAntialiasing;
@property (atomic, assign, readwrite) NSNumber* backgroundColor;
@property (atomic, assign, readwrite) NSNumber* cornerRadius;
@property (atomic, assign, readwrite) NSNumber* borderWidth;
@property (atomic, assign, readwrite) NSNumber* borderColor;
@property (atomic, assign, readwrite) NSNumber* opacity;
@property (atomic, assign, readwrite) NSNumber* allowsGroupOpacity;
@property (atomic, retain, readwrite) NSNumber* compositingFilter;
@property (atomic, copy, readwrite) NSArray* filters;
@property (atomic, copy, readwrite) NSArray* backgroundFilters;
@property (atomic, assign, readwrite) NSNumber* shouldRasterize;
@property (atomic, assign, readwrite) NSNumber* rasterizationScale;
@property (atomic, assign, readwrite) NSNumber* shadowColor;
@property (atomic, assign, readwrite) NSNumber* shadowOpacity;
@property (atomic, assign, readwrite) NSNumber* shadowOffset;
@property (atomic, assign, readwrite) NSNumber* shadowRadius;
@property (atomic, assign, readwrite) NSNumber* shadowPath;
@property (atomic, copy, readwrite) NSDictionary* actions;
@property (atomic, copy, readwrite) NSString* name;
@property (atomic, weak, readwrite) NSNumber* delegate;
@property (atomic, copy, readwrite) NSDictionary* style;
@property (atomic, assign, readwrite) NSNumber* beginTime;
@property (atomic, assign, readwrite) NSNumber* duration;
@property (atomic, assign, readwrite) NSNumber* speed;
@property (atomic, assign, readwrite) NSNumber* timeOffset;
@property (atomic, assign, readwrite) NSNumber* repeatCount;
@property (atomic, assign, readwrite) NSNumber* repeatDuration;
@property (atomic, assign, readwrite) NSNumber* autoreverses;
@property (atomic, copy, readwrite) NSString* fillMode;
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (BOOL) resolveInstanceMethod:(SEL)a;
 + (id) properties;
 + (id) defaultValueForKey:(id)a;
 + (BOOL) CA_automaticallyNotifiesObservers:(Class)a;
 + (void) CAMLParserStartElement:(id)a;
 + (id) layer;
 + (^?) CA_setterForProperty:(r^{_CAPropertyInfo=I[2:]b16b16*^{__CFString}})a;
 + (^?) CA_getterForProperty:(r^{_CAPropertyInfo=I[2:]b16b16*^{__CFString}})a;
 + (BOOL) _hasRenderLayerSubclass;
 + (id) defaultActionForKey:(id)a;
 + (BOOL) needsDisplayForKey:(id)a;
 + (BOOL) needsLayoutForKey:(id)a;
 + (void) CAMLParserEndElement:(id)a;

 - (void) setPerspectiveDistance:(double)a ;
 - (BOOL) uiHasFilterWithName:(id)a ;
 - (long long) compareTextEffectsOrdering:(id)a ;
 - (void) web_disableAllActions;
 - (id) valueForUndefinedKey:(id)a ;
 - (void) setValue:(id)a forUndefinedKey:(id)b ;
 - (void) setValue:(id)a forKeyPath:(id)b ;
 - ({CGPoint=dd}) position;
 - (double) duration;
 - ({CGSize=dd}) size;
 - (id) .cxx_construct;
 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) dealloc;
 - (BOOL) retainWeakReference;
 - (BOOL) allowsWeakReference;
 - (void) setValue:(id)a forKey:(id)b ;
 - (id) name;
 - (void) setDelegate:(id)a ;
 - (void) setNeedsDisplayOnBoundsChange:(BOOL)a ;
 - (void) setHitTestsAsOpaque:(BOOL)a ;
 - (void) setAffineTransform:({CGAffineTransform=dddddd})a ;
 - (BOOL) hasBeenCommitted;
 - (void) setAllowsGroupBlending:(BOOL)a ;
 - (void) setCornerRadius:(double)a ;
 - (BOOL) needsLayout;
 - (void) layoutBelowIfNeeded;
 - (id) contentsGravity;
 - (void) setShouldRasterize:(BOOL)a ;
 - (void) setClearsContext:(BOOL)a ;
 - (void) clearHasBeenCommitted;
 - (void) removeAllAnimations;
 - (void) invalidateContents;
 - (void) setContentsTransform:({CGAffineTransform=dddddd})a ;
 - (void) insertSublayer:(id)a below:(id)b ;
 - (BOOL) isFrozen;
 - (void) setAllowsGroupOpacity:(BOOL)a ;
 - (void) setPreloadsCache:(BOOL)a ;
 - (void) setFrozen:(BOOL)a ;
 - (void) setShadowPath:(^{CGPath=})a ;
 - (id) contentsScaling;
 - (void) setFlipped:(BOOL)a ;
 - (BOOL) opaque;
 - (void) setAllowsEdgeAntialiasing:(BOOL)a ;
 - (void) setBehaviors:(id)a ;
 - (void) setMeshTransform:(id)a ;
 - (id) debugDescription;
 - (id) init;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) delegate;
 - (id) valueForKey:(id)a ;
 - (id) valueForKeyPath:(id)a ;
 - (void) setName:(id)a ;
 - (void) setShadowOffset:({CGSize=dd})a ;
 - (void) setShadowColor:(^{CGColor=})a ;
 - (void) removeFromSuperlayer;
 - (void) setContentsScale:(double)a ;
 - (void) setRasterizationScale:(double)a ;
 - (void) insertSublayer:(id)a atIndex:(unsigned int)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) visibleRect;
 - (void) setBackgroundColor:(^{CGColor=})a ;
 - (void) setBorderColor:(^{CGColor=})a ;
 - (id) style;
 - (void) setActions:(id)a ;
 - (id) actions;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frame;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setMass:(double)a ;
 - (void) setContentsCenter:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setContentsScaling:(id)a ;
 - (id) initWithBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) insertState:(id)a atIndex:(unsigned int)b ;
 - (void) addState:(id)a ;
 - (void) removeState:(id)a ;
 - (id) stateWithName:(id)a ;
 - (id) dependentStatesOfState:(id)a ;
 - (id) stateTransitionFrom:(id)a to:(id)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) bounds;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - ({CGPoint=dd}) convertPoint:({CGPoint=dd})a fromLayer:(id)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) convertRect:({CGRect={CGPoint=dd}{CGSize=dd}})a fromLayer:(id)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) convertRect:({CGRect={CGPoint=dd}{CGSize=dd}})a toLayer:(id)b ;
 - (void) _scrollPoint:({CGPoint=dd})a fromLayer:(id)b ;
 - (void) _scrollRect:({CGRect={CGPoint=dd}{CGSize=dd}})a fromLayer:(id)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _visibleRectOfLayer:(id)a ;
 - (id) superlayer;
 - (void) CAMLParser:(id)a setValue:(id)b forKey:(id)c ;
 - (void) encodeWithCAMLWriter:(id)a ;
 - (id) CAMLTypeForKey:(id)a ;
 - (id) animationForKey:(id)a ;
 - (void) addAnimation:(id)a forKey:(id)b ;
 - (id) initWithLayer:(id)a ;
 - (id) sublayers;
 - (id) mask;
 - (double) convertTime:(double)a fromLayer:(id)b ;
 - (void) setBeginTime:(double)a ;
 - (void) setDuration:(double)a ;
 - (double) beginTime;
 - (id) presentationLayer;
 - (void) removeAnimationForKey:(id)a ;
 - (double) timeOffset;
 - (float) repeatCount;
 - (double) repeatDuration;
 - (void) setRepeatDuration:(double)a ;
 - (BOOL) autoreverses;
 - (id) fillMode;
 - (void) setFillMode:(id)a ;
 - (BOOL) shouldArchiveValueForKey:(id)a ;
 - (BOOL) _renderLayerDefinesProperty:(unsigned int)a ;
 - (unsigned int) _renderLayerPropertyAnimationFlags:(unsigned int)a ;
 - ({CATransform3D=dddddddddddddddd}) transform;
 - (void) setTransform:({CATransform3D=dddddddddddddddd})a ;
 - ({CGPoint=dd}) anchorPoint;
 - (BOOL) contentsAreFlipped;
 - (id) _initWithReference:(id)a ;
 - (^{Layer=^^?{Atomic={?=i}}{Data=ICCCCb3b3b4b4b4b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b25{Vec2<double>=dd}{Rect=dddd}}{Ref<CA::Render::Object>=^{Object}}{Ref<CA::Render::Object>=^{Object}}{Ref<CA::Render::TypedArray<CA::Render::Layer> >=^{TypedArray<CA::Render::Layer>}}^{Layer}{Ref<CA::Render::Layer::Ext>=^{Ext}}{Ref<CA::Render::TypedArray<CA::Render::Animation> >=^{TypedArray<CA::Render::Animation>}}{Ref<CA::Render::Handle>=^{Handle}}}) _copyRenderLayer:(^{Transaction=^{Shared}i^{HashTable<CA::Layer *, unsigned int *>}^{SpinLock}I^{Level}^{List<void (^)()>}^{Command}^{Deleted}^{List<const void *>}^{Context}^{HashTable<CA::Layer *, CA::Layer *>}^{__CFRunLoop}^{__CFRunLoopObserver}^{LayoutList}^{List<CA::Layer *>}b1b1b1b1b1b1})a layerFlags:(unsigned int)b commitFlags:(^I)c ;
 - (unsigned int) _renderImageCopyFlags;
 - (id) contents;
 - (float) minificationFilterBias;
 - (double) contentsScale;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) contentsRect;
 - (id) magnificationFilter;
 - (id) minificationFilter;
 - (void) setContents:(id)a ;
 - (void) setMinificationFilterBias:(float)a ;
 - (void) reloadValueForKeyPath:(id)a ;
 - (id) implicitAnimationForKeyPath:(id)a ;
 - (void) _renderBackgroundInContext:(^{CGContext=})a ;
 - (double) cornerRadius;
 - (void) _dealloc;
 - ({CATransform3D=dddddddddddddddd}) sublayerTransform;
 - (double) anchorPointZ;
 - (double) zPosition;
 - (BOOL) needsLayoutOnGeometryChange;
 - (void) setNeedsLayout;
 - (void) display;
 - (void) setNeedsDisplay;
 - (BOOL) _deferrsDidBecomeVisiblePostCommit;
 - (void) layerDidBecomeVisible:(BOOL)a ;
 - (id) actionForKey:(id)a ;
 - (BOOL) needsDisplayOnBoundsChange;
 - ({CGAffineTransform=dddddd}) affineTransform;
 - (void) setPosition:({CGPoint=dd})a ;
 - (id) ancestorSharedWithLayer:(id)a ;
 - (BOOL) ignoresHitTesting;
 - (BOOL) allowsHitTesting;
 - (BOOL) isDoubleSided;
 - (BOOL) masksToBounds;
 - (id) hitTest:({CGPoint=dd})a ;
 - (BOOL) sortsSublayers;
 - (id) modelLayer;
 - (BOOL) _scheduleAnimationTimer;
 - (void) _cancelAnimationTimer;
 - (void) setNeedsDisplayInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (BOOL) needsDisplay;
 - (void) _prepareContext:(^{CGContext=})a ;
 - (BOOL) isHidden;
 - (float) opacity;
 - (void) layoutIfNeeded;
 - (void) displayIfNeeded;
 - (float) shadowOpacity;
 - ({CGSize=dd}) shadowOffset;
 - (double) shadowRadius;
 - (^{CGColor=}) shadowColor;
 - (void) _renderForegroundInContext:(^{CGContext=})a ;
 - (void) _renderSublayersInContext:(^{CGContext=})a ;
 - (void) _renderBorderInContext:(^{CGContext=})a ;
 - (void) renderInContext:(^{CGContext=})a ;
 - (^{CGColor=}) backgroundColor;
 - (unsigned int) edgeAntialiasingMask;
 - ({CGAffineTransform=dddddd}) contentsTransform;
 - (void) drawInContext:(^{CGContext=})a ;
 - (double) borderWidth;
 - (^{CGColor=}) borderColor;
 - (void) _display;
 - (BOOL) isOpaque;
 - (BOOL) drawsAsynchronously;
 - (BOOL) acceleratesDrawing;
 - (BOOL) clearsContext;
 - (BOOL) drawsMipmapLevels;
 - (void) setSizeRequisition:({CGSize=dd})a ;
 - (void) layoutSublayers;
 - ({CGSize=dd}) sizeRequisition;
 - ({CGSize=dd}) _preferredSize;
 - (BOOL) isGeometryFlipped;
 - (void) setGeometryFlipped:(BOOL)a ;
 - (double) convertTime:(double)a toLayer:(id)b ;
 - (id) cornerContents;
 - (void) setCornerContents:(id)a ;
 - ({CGSize=dd}) preferredFrameSize;
 - (unsigned int) maskedCorners;
 - (void) setMaskedCorners:(unsigned int)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) contentsCenter;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) cornerContentsCenter;
 - (void) setCornerContentsCenter:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) filters;
 - (id) backgroundFilters;
 - (void) setBackgroundFilters:(id)a ;
 - (id) compositingFilter;
 - (^{CGPath=}) shadowPath;
 - (BOOL) shouldRasterize;
 - (BOOL) rasterizationPrefersDisplayCompositing;
 - (void) setRasterizationPrefersDisplayCompositing:(BOOL)a ;
 - (double) rasterizationScale;
 - (void) setDrawsAsynchronously:(BOOL)a ;
 - (BOOL) allowsEdgeAntialiasing;
 - (BOOL) allowsGroupOpacity;
 - (BOOL) canDrawConcurrently;
 - (void) setContentsChanged;
 - (BOOL) isDescendantOf:(id)a ;
 - (id) meshTransform;
 - (id) lights;
 - (id) behaviors;
 - ({CGSize=dd}) backgroundColorPhase;
 - (BOOL) acceptsLights;
 - (double) ambientReflectance;
 - (double) diffuseReflectance;
 - (double) specularReflectance;
 - (double) shininess;
 - (double) metallicity;
 - (double) velocityStretch;
 - (double) momentOfInertia;
 - (double) coefficientOfRestitution;
 - (BOOL) preloadsCache;
 - (BOOL) allowsDisplayCompositing;
 - (BOOL) allowsGroupBlending;
 - (BOOL) hitTestsAsOpaque;
 - (BOOL) literalContentsCenter;
 - (BOOL) swapsMaskAndLayer;
 - (BOOL) invertsShadow;
 - (BOOL) shadowPathIsBounds;
 - (void) _didCommitLayer:(^{Transaction=^{Shared}i^{HashTable<CA::Layer *, unsigned int *>}^{SpinLock}I^{Level}^{List<void (^)()>}^{Command}^{Deleted}^{List<const void *>}^{Context}^{HashTable<CA::Layer *, CA::Layer *>}^{__CFRunLoop}^{__CFRunLoopObserver}^{LayoutList}^{List<CA::Layer *>}b1b1b1b1b1b1})a ;
 - (BOOL) _canDisplayConcurrently;
 - (BOOL) layoutIsActive;
 - (id) layerBeingDrawn;
 - (id) layerAtTime:(double)a ;
 - (BOOL) hidden;
 - (BOOL) doubleSided;
 - (BOOL) isFlipped;
 - (void) setAllowsHitTesting:(BOOL)a ;
 - (void) setLiteralContentsCenter:(BOOL)a ;
 - (void) setSortsSublayers:(BOOL)a ;
 - (void) setInvertsShadow:(BOOL)a ;
 - (void) setShadowPathIsBounds:(BOOL)a ;
 - (BOOL) contentsOpaque;
 - (void) setContentsOpaque:(BOOL)a ;
 - (void) setSwapsMaskAndLayer:(BOOL)a ;
 - (void) setAllowsDisplayCompositing:(BOOL)a ;
 - (void) setBackgroundColorPhase:({CGSize=dd})a ;
 - (void) setLights:(id)a ;
 - (void) setAcceptsLights:(BOOL)a ;
 - (void) setAmbientReflectance:(double)a ;
 - (void) setDiffuseReflectance:(double)a ;
 - (void) setSpecularReflectance:(double)a ;
 - (void) setShininess:(double)a ;
 - (void) setMetallicity:(double)a ;
 - (void) setVelocityStretch:(double)a ;
 - (void) setMomentOfInertia:(double)a ;
 - (void) setCoefficientOfRestitution:(double)a ;
 - (BOOL) getRendererInfo:(^{_CARenderRendererInfo=iII})a size:(unsigned long long)b ;
 - (void) scrollRectToVisible:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setCanDrawConcurrently:(BOOL)a ;
 - (void) setStyle:(id)a ;
 - (void) setBorderWidth:(double)a ;
 - (void) setHidden:(BOOL)a ;
 - (void) setOpaque:(BOOL)a ;
 - (void) addSublayer:(id)a ;
 - (void) setTimeOffset:(double)a ;
 - (void) setRepeatCount:(float)a ;
 - (void) setAutoreverses:(BOOL)a ;
 - (void) setFilters:(id)a ;
 - (void) setShadowRadius:(double)a ;
 - (void) setShadowOpacity:(float)a ;
 - (void) setCompositingFilter:(id)a ;
 - (id) animationKeys;
 - (void) setSublayers:(id)a ;
 - (void) replaceSublayer:(id)a with:(id)b ;
 - (void) setMask:(id)a ;
 - (void) setZPosition:(double)a ;
 - (void) setAnchorPoint:({CGPoint=dd})a ;
 - (void) setAnchorPointZ:(double)a ;
 - (void) setSublayerTransform:({CATransform3D=dddddddddddddddd})a ;
 - (void) setDoubleSided:(BOOL)a ;
 - (void) setMasksToBounds:(BOOL)a ;
 - (void) setAcceleratesDrawing:(BOOL)a ;
 - (void) setContentsRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setMinificationFilter:(id)a ;
 - (void) setMagnificationFilter:(id)a ;
 - (void) setOpacity:(float)a ;
 - (void) setEdgeAntialiasingMask:(unsigned int)a ;
 - (void) scrollPoint:({CGPoint=dd})a ;
 - (void) setContentsGravity:(id)a ;
 - (void) insertSublayer:(id)a above:(id)b ;
 - (^v) regionBeingDrawn;
 - (void) setNeedsLayoutOnGeometryChange:(BOOL)a ;
 - ({CGPoint=dd}) convertPoint:({CGPoint=dd})a toLayer:(id)b ;
 - (double) mass;
 - (float) speed;
 - (void) setSpeed:(float)a ;
 - (BOOL) containsPoint:({CGPoint=dd})a ;
 - (id) context;


@end
