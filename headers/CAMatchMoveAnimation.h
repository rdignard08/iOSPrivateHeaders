
@interface CAMatchMoveAnimation : CAAnimation {

}
 + (id) defaultValueForKey:(id)a;

 - (id) keyPath;
 - (void) setSourceLayer:(id)a;
 - (void) setSourcePoints:(id)a;
 - (void) setKeyPath:(id)a;
 - (BOOL) _setCARenderAnimation:(^{Animation=^^?{Atomic={?=i}}f{Ref<CA::Render::Timing>=^{Timing}}{Ref<CA::Render::Vector>=^{Vector}}^vIIII})alayer:(id)b;
 - (unsigned int) _propertyFlagsForLayer:(id)a;
 - (^{Animation=^^?{Atomic={?=i}}f{Ref<CA::Render::Timing>=^{Timing}}{Ref<CA::Render::Vector>=^{Vector}}^vIIII}) _copyRenderAnimationForLayer:(id)a;
 - (void) applyForTime:(double)apresentationObject:(id)bmodelObject:(id)c;
 - (BOOL) isAdditive;
 - (id) sourceLayer;
 - (BOOL) targetsSuperlayer;
 - (id) sourcePoints;
 - (BOOL) appliesScale;
 - (BOOL) appliesRotation;
 - (BOOL) appliesX;
 - (BOOL) appliesY;
 - (void) setTargetsSuperlayer:(BOOL)a;
 - (void) setAppliesX:(BOOL)a;
 - (void) setAppliesY:(BOOL)a;
 - (void) setAppliesScale:(BOOL)a;
 - (void) setAppliesRotation:(BOOL)a;
 - (void) setAdditive:(BOOL)a;


@end
