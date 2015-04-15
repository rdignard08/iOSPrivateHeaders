
@protocol NSISConstraint;
@interface NSLayoutConstraint : NSObject <NSISConstraint> {

    id _container;
    id _firstItem;
    id _secondItem;
    double _constant;
    double _loweredConstant;
    id _markerAndPositiveExtraVar;
    id _negativeExtraVar;
    unsigned long long _layoutConstraintFlags;
    float _coefficient;
    float _priority;
}
@property (atomic, assign, readwrite, getter=_encodedConstant, setter=_setEncodedConstant:) _NSLayoutConstraintConstant* encodedConstant;
@property (atomic, assign, readwrite) NSNumber* priority;
@property (atomic, assign, readwrite) NSNumber* shouldBeArchived;
@property (atomic, assign, readwrite) NSNumber* firstItem;
@property (atomic, assign, readwrite) NSNumber* firstAttribute;
@property (atomic, assign, readwrite) NSNumber* relation;
@property (atomic, assign, readwrite) NSNumber* secondItem;
@property (atomic, assign, readwrite) NSNumber* secondAttribute;
@property (atomic, assign, readwrite) NSNumber* multiplier;
@property (atomic, assign, readwrite) NSNumber* constant;
@property (atomic, assign, readwrite, getter=isActive) NSNumber* active;
@property (atomic, copy, readwrite) NSString* identifier;
@property (atomic, assign, readonly) NSNumber* hasBeenLowered;
@property (atomic, assign, readwrite) NSNumber* container;
@property (atomic, copy, readwrite) NSString* symbolicConstant;
@property (nonatomic, assign, readwrite, getter=_loweredConstantNeedsUpdate, setter=_setLoweredConstantNeedsUpdate:) NSNumber* loweredConstantNeedsUpdate;
 + (BOOL) _UIWantsMarginAttributeSupport;
 + (id) constraintWithItem:(id)aattribute:(long long)brelatedBy:(long long)ctoItem:(id)dattribute:(long long)emultiplier:(double)fsymbolicConstant:(id)g;
 + (id) constraintWithItem:(id)aattribute:(long long)brelatedBy:(long long)ctoItem:(id)dattribute:(long long)emultiplier:(double)fconstant:(double)g;
 + (id) _findCommonAncestorOfItem:(id)aandItem:(id)b;
 + (void) _addOrRemoveConstraints:(id)aactivate:(BOOL)b;
 + (id) constraintsWithVisualFormat:(id)aoptions:(unsigned long long)bmetrics:(id)cviews:(id)d;
 + (void) _setLegacyDecodingOnly:(BOOL)a;
 + (id) constraintWithItem:(id)aattribute:(long long)brelatedBy:(long long)ctoItem:(id)dattribute:(long long)emultiplier:(double)fsymbolicConstant:(id)gtheme:(id)h;
 + (id) constraintWithItem:(id)aattribute:(long long)brelatedBy:(long long)ctoItem:(id)dattribute:(long long)emultiplier:(double)f;
 + (id) constraintWithItem:(id)aattribute:(long long)brelatedBy:(long long)ctoItem:(id)dattribute:(long long)econstant:(double)f;
 + (id) constraintWithItem:(id)aattribute:(long long)brelatedBy:(long long)ctoItem:(id)dattribute:(long long)e;
 + (id) constraintWithItem:(id)aattribute:(long long)brelatedBy:(long long)cconstant:(double)d;
 + (void) deactivateConstraints:(id)a;
 + (void) activateConstraints:(id)a;

 - (id) _encodedConstant;
 - (void) _setEncodedConstant:(id)a;
 - (BOOL) defaultResolvedValue:(^d)aforSymbolicConstant:(id)berror:(^@)c;
 - (double) multiplier;
 - (void) nsis_valueOfVariable:(id)adidChangeInEngine:(id)b;
 - (id) nsis_descriptionOfVariable:(id)a;
 - (BOOL) nsis_shouldIntegralizeVariable:(id)a;
 - (BOOL) nsis_valueOfVariableIsUserObservable:(id)a;
 - (double) nsis_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarker:(id)a;
 - (double) constant;
 - (void) setConstant:(double)a;
 - (BOOL) hasBeenLowered;
 - (id) _constantDescriptionForDTrace;
 - (id) _identifier;
 - (void) _setIdentifier:(id)a;
 - (double) _allowedMagnitudeForIntegralizationAdjustment;
 - (int) _constraintType;
 - (long long) firstAttribute;
 - (id) firstItem;
 - (id) secondItem;
 - ({CGSize=dd}) _engineToContainerScalingCoefficients;
 - (void) setHasBeenLowered:(BOOL)a;
 - (BOOL) _lowerIntoExpression:(id)areportingConstantIsRounded:(^B)b;
 - (void) _removeFromEngine:(id)a;
 - (BOOL) _addLoweredExpression:(id)atoEngine:(id)bintegralizationAdjustment:(double)clastLoweredConstantWasRounded:(BOOL)dmutuallyExclusiveConstraints:(^@)e;
 - (void) _addToEngine:(id)a;
 - (double) _allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarkerScaling:(^d)a;
 - (id) _markerAndPositiveExtraVar;
 - (id) _symbolicConstant;
 - (void) _ensureValueMaintainsArbitraryLimit:(^d)a;
 - (void) _setSymbolicConstant:(id)a;
 - (BOOL) _tryToChangeContainerGeometryWithUndoHandler:(@?)a;
 - (BOOL) _effectiveConstant:(^d)aerror:(^@)b;
 - (void) _setSymbolicConstant:(id)aconstant:(double)b;
 - (long long) relation;
 - (id) _descriptionforSymbolicConstant;
 - (id) descriptionAccessory;
 - (id) asciiArtDescription;
 - (id) equationDescription;
 - (id) _priorityDescription;
 - (long long) secondAttribute;
 - (BOOL) shouldBeArchived;
 - (void) setShouldBeArchived:(BOOL)a;
 - (id) animations;
 - (void) setAnimations:(id)a;
 - (id) _constraintByReplacingItem:(id)awithItem:(id)b;
 - (double) priorityForVariable:(id)a;
 - (BOOL) _addToEngine:(id)aintegralizationAdjustment:(double)bmutuallyExclusiveConstraints:(^@)c;
 - (void) _makeExtraVars;
 - (BOOL) _nsib_isRedundantInEngine:(id)a;
 - (BOOL) isActive;
 - (id) _layoutEngine;
 - (void) setActive:(BOOL)a;
 - (void) _setFirstItem:(id)a;
 - (void) _setFirstAttribute:(long long)a;
 - (void) _setRelation:(long long)a;
 - (void) _setMultiplier:(double)a;
 - (void) _setSecondItem:(id)a;
 - (void) _setSecondAttribute:(long long)a;
 - (void) setSymbolicConstant:(id)a;
 - (void) _setLoweredConstantNeedsUpdate:(BOOL)a;
 - (BOOL) _loweredConstantNeedsUpdate;
 - (BOOL) _isIBPrototypingLayoutConstraint;
 - (BOOL) _isFudgeable;
 - (double) _fudgeIncrement;
 - (void) _setMarkerAndPositiveErrorVar:(id)a;
 - (id) _negativeExtraVar;
 - (void) _setNegativeExtraVar:(id)a;
 - (BOOL) _deferDTraceLogging;
 - (void) _setDeferDTraceLogging:(BOOL)a;
 - (int) _primitiveConstraintType;
 - (void) _setPrimitiveConstraintType:(int)a;
 - (void) _clearWeakContainerReference;
 - (id) symbolicConstant;
 - (id) _constraintByReplacingView:(id)awithView:(id)b;
 - (BOOL) _describesSameRestrictionAsConstraint:(id)a;
 - (id) _loweredExpression;
 - (id) description;
 - (void) dealloc;
 - (id) container;
 - (void) setContainer:(id)a;
 - (void) _containerGeometryDidChange;
 - (BOOL) _nsib_isRedundant;
 - (BOOL) _loweredConstantIsRounded;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (float) priority;
 - (void) setPriority:(float)a;
 - (id) identifier;
 - (void) setIdentifier:(id)a;


@end
