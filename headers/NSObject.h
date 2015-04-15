
@protocol NSObject;
@interface NSObject : nil <NSObject> {

    Class isa;
}
 + (void) performSelectorWithNonRetainedTarget:(id)aselector:(SEL)bwithObject:(id)cafterDelay:(double)d;
 + (void) cancelPreviousPerformRequestsWithNonRetainedTarget:(id)aselector:(SEL)bobject:(id)c;
 + (void) cancelPreviousPerformRequestsWithNonRetainedTarget:(id)a;
 + (id) __property_list__;
 + (id) rg_declarationForProperty:(id)a;
 + (void) load;
 + (id) rg_propertyListsToSkip;
 + (BOOL) rg_isPropertyToBeAvoided:(id)a;
 + (BOOL) rg_propertyIsWeak:(id)a;
 + (id) objectFromDataSource:(id)a;
 + (id) objectFromDataSource:(id)ainContext:(id)b;
 + (void) _installAppearanceSwizzlesForSetter:(id)a;
 + (BOOL) __accessibilityGuidedAccessStateEnabled;
 + (long long) __accessibilityGuidedAccessRestrictionStateForIdentifier:(id)a;
 + (void) __accessibilityRequestGuidedAccessSession:(BOOL)acompletion:(@?)b;
 + (id) _alternateUISwitchableSelectorPairs;
 + (BOOL) isSelectorExcludedFromWebScript:(SEL)a;
 + (BOOL) isKeyExcludedFromWebScript:(r*)a;
 + (id) _webkit_invokeOnMainThread;
 + (BOOL) sbs_synchronousWrapper:(@?)adispatchTimeout:(unsigned long long)b;
 + (id) sbs_dataFromObject:(id)a;
 + (id) sbs_objectFromData:(id)a;
 + (BOOL) sbs_synchronousWrapper:(@?)a;
 + (BOOL) sbs_synchronousWrapper:(@?)atimeout:(double)b;
 + (id) sbs_dataWithValue:(id)a;
 + (id) sbs_valueFromData:(id)aofType:(r*)b;
 + (BOOL) CA_automaticallyNotifiesObservers:(Class)a;
 + (BOOL) CA_encodesPropertyConditionally:(unsigned int)atype:(int)b;
 + (^?) CA_setterForProperty:(r^{_CAPropertyInfo=I[2:]b16b16*^{__CFString}})a;
 + (^?) CA_getterForProperty:(r^{_CAPropertyInfo=I[2:]b16b16*^{__CFString}})a;
 + (id) CA_CAMLPropertyForKey:(id)a;
 + (void) bs_waitAsynchronouslyForNotification:(id)aobject:(id)bforDuration:(double)candPerformBlock:(@?)donQueue:(id)e;
 + (id) bs_dataFromObject:(id)a;
 + (BOOL) bs_synchronousWrapper:(@?)atimeout:(double)b;
 + (id) bs_objectFromData:(id)a;
 + (id) replacementObjectForPortCoder:(id)a;
 + (^{objc_method_description=:*}) instanceMethodDescriptionForSelector:(SEL)a;
 + (^{objc_method_description=:*}) methodDescriptionForSelector:(SEL)a;
 + (r*) _localClassNameForClass;
 + (void) cancelPreviousPerformRequestsWithTarget:(id)aselector:(SEL)bobject:(id)c;
 + (void) cancelPreviousPerformRequestsWithTarget:(id)a;
 + (BOOL) implementsSelector:(SEL)a;
 + (BOOL) instancesImplementSelector:(SEL)a;
 + (void) setVersion:(long long)a;
 + (void) load;
 + (long long) version;
 + (Class) classForKeyedUnarchiver;
 + (id) classFallbacksForKeyedArchiver;
 + (BOOL) _shouldAddObservationForwardersForKey:(id)a;
 + (void) setKeys:(id)atriggerChangeNotificationsForDependentKey:(id)b;
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (id) _keysForValuesAffectingValueForKey:(id)a;
 + (id) keyPathsForValuesAffectingValueForKey:(id)a;
 + (id) _createValueGetterWithContainerClassID:(id)akey:(id)b;
 + (id) _createValueSetterWithContainerClassID:(id)akey:(id)b;
 + (id) _createMutableOrderedSetValueGetterWithContainerClassID:(id)akey:(id)b;
 + (id) _createMutableSetValueGetterWithContainerClassID:(id)akey:(id)b;
 + (id) _createValuePrimitiveGetterWithContainerClassID:(id)akey:(id)b;
 + (id) _createValuePrimitiveSetterWithContainerClassID:(id)akey:(id)b;
 + (id) _createOtherValueGetterWithContainerClassID:(id)akey:(id)b;
 + (id) _createOtherValueSetterWithContainerClassID:(id)akey:(id)b;
 + (id) _createMutableArrayValueGetterWithContainerClassID:(id)akey:(id)b;
 + (BOOL) accessInstanceVariablesDirectly;
 + (id) instanceMethodSignatureForSelector:(SEL)a;
 + (void) doesNotRecognizeSelector:(SEL)a;
 + (id) description;
 + (void) load;
 + (void) dealloc;
 + (void) finalize;
 + (id) methodSignatureForSelector:(SEL)a;
 + (id) __allocWithZone_OA:(^{_NSZone=})a;
 + (id) _copyDescription;
 + (id) init;
 + (^{_NSZone=}) zone;
 + (^?) instanceMethodForSelector:(SEL)a;
 + (BOOL) isAncestorOfObject:(id)a;
 + (id) instanceMethodSignatureForSelector:(SEL)a;
 + (id) copyWithZone:(^{_NSZone=})a;
 + (id) mutableCopyWithZone:(^{_NSZone=})a;
 + (void) doesNotRecognizeSelector:(SEL)a;
 + (id) description;
 + (BOOL) isFault;
 + (void) load;
 + (void) initialize;
 + (BOOL) resolveInstanceMethod:(SEL)a;
 + (BOOL) resolveClassMethod:(SEL)a;
 + (id) retain;
 + (Vv) release;
 + (id) autorelease;
 + (unsigned long long) retainCount;
 + (id) alloc;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (void) dealloc;
 + (id) copy;
 + (id) new;
 + (void) finalize;
 + (void) forwardInvocation:(id)a;
 + (BOOL) _tryRetain;
 + (BOOL) _isDeallocating;
 + (BOOL) retainWeakReference;
 + (BOOL) allowsWeakReference;
 + (BOOL) isKindOfClass:(Class)a;
 + (id) mutableCopy;
 + (unsigned long long) hash;
 + (BOOL) isEqual:(id)a;
 + (BOOL) respondsToSelector:(SEL)a;
 + (id) self;
 + (id) performSelector:(SEL)a;
 + (id) performSelector:(SEL)awithObject:(id)b;
 + (BOOL) conformsToProtocol:(id)a;
 + (id) methodSignatureForSelector:(SEL)a;
 + (id) forwardingTargetForSelector:(SEL)a;
 + (^?) methodForSelector:(SEL)a;
 + (Class) class;
 + (id) debugDescription;
 + (id) init;
 + (BOOL) isProxy;
 + (BOOL) isMemberOfClass:(Class)a;
 + (Class) superclass;
 + (BOOL) instancesRespondToSelector:(SEL)a;
 + (BOOL) isSubclassOfClass:(Class)a;
 + (id) performSelector:(SEL)awithObject:(id)bwithObject:(id)c;

 - (id) MPMediaLibraryDataProviderSystemML3CoercedString;
 - (void) __crossedTimeMarkerNotification:(id)a;
 - (void) registerForTimeMarkerNotificationsIfNecessaryForPlayer:(id)a;
 - (void) unregisterForTimeMarkerNotifications;
 - (void) _nonRetainingPerformSelector:(SEL)awithObject:(id)bafterDelay:(double)cinModes:(id)d;
 - (id) _MPCancellableDispatchAccessQueue;
 - (BOOL) cancelPreviousDispatchAsyncWithCancellationIdentifier:(id)a;
 - (void) dispatchAsyncWithCancellationIdentifier:(id)adelay:(double)bqueue:(id)cblock:(@?)d;
 - (id) ml_stringValueForSQL;
 - (void) ml_bindToSQLiteStatement:(^{sqlite3_stmt=})aatPosition:(int)b;
 - (id) blockingMainThreadProxy;
 - (id) delayedProxy:(double)a;
 - (id) mainThreadProxy;
 - (void) postNotificationWithDescription:(id)a;
 - (BOOL) okToNotifyFromThisThread;
 - (void) fromNotifySafeThreadPerformSelector:(SEL)awithObject:(id)b;
 - (void) allowSafePerformSelector;
 - (void) disallowSafePerformSelector;
 - (void) fromNotifySafeThreadPostNotificationName:(id)aobject:(id)buserInfo:(id)c;
 - (void) fromMainThreadPostNotificationName:(id)aobject:(id)buserInfo:(id)c;
 - (id) __property_list__;
 - (id) rg_declarationForProperty:(id)a;
 - (Class) rg_classForProperty:(id)a;
 - (id) rg_keys;
 - (id) dictionaryRepresentationShouldFollowWeakReferences:(BOOL)a;
 - (id) JSONRepresentation;
 - (id) dictionaryRepresentation;
 - (BOOL) rg_isPropertyToBeAvoided:(id)a;
 - (BOOL) rg_propertyIsWeak:(id)a;
 - (id) rg_dictionaryHelper:(id)afollowWeak:(BOOL)b;
 - (id) objectForKeyedSubscript:(id)a;
 - (void) setObject:(id)aforKeyedSubscript:(id)b;
 - (void) rg_initProperty:(id)awithValue:(id)binContext:(id)c;
 - (id) extendWith:(id)a;
 - (id) extendWith:(id)ainContext:(id)b;
 - (id) className;
 - (id) _NSItemProviderTypeCoercion_coercedUIImageValueFromNSURLValue:(id)aerror:(^@)b;
 - (id) _NSItemProviderTypeCoercion_coercedUIImageValueFromNSDataValue:(id)aerror:(^@)b;
 - (unsigned long long) defaultAccessibilityTraits;
 - (BOOL) isAccessibilityElementByDefault;
 - (BOOL) isElementAccessibilityExposedToInterfaceBuilder;
 - (void) _accessibilityFinalize;
 - (void) accessibilitySetIdentification:(id)a;
 - (id) accessibilityElements;
 - (void) setAccessibilityElements:(id)a;
 - (long long) accessibilityElementCount;
 - (id) accessibilityElementAtIndex:(long long)a;
 - (long long) indexOfAccessibilityElement:(id)a;
 - (void) accessibilityIncrement;
 - (void) accessibilityDecrement;
 - (BOOL) accessibilityScroll:(long long)a;
 - (BOOL) accessibilityPerformEscape;
 - (BOOL) accessibilityPerformMagicTap;
 - (BOOL) accessibilityActivate;
 - (void) setAccessibilityCustomActions:(id)a;
 - (id) accessibilityCustomActions;
 - (void) accessibilityElementDidBecomeFocused;
 - (void) accessibilityElementDidLoseFocus;
 - (BOOL) accessibilityElementIsFocused;
 - (id) accessibilityIdentifier;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) accessibilityFrame;
 - (id) storedAccessibilityViewIsModal;
 - (id) storedAccessibilityElementsHidden;
 - (id) storedShouldGroupAccessibilityChildren;
 - (id) storedAccessibilityNavigationStyle;
 - (id) accessibilityHint;
 - ({CGPoint=dd}) accessibilityActivationPoint;
 - (unsigned long long) accessibilityTraits;
 - (id) accessibilityLanguage;
 - (id) accessibilityPath;
 - (BOOL) accessibilityViewIsModal;
 - (BOOL) accessibilityElementsHidden;
 - (BOOL) shouldGroupAccessibilityChildren;
 - (long long) accessibilityNavigationStyle;
 - (id) storedAccessibilityTraits;
 - (id) storedIsAccessibilityElement;
 - (id) storedAccessibilityFrame;
 - (id) storedAccessibilityActivationPoint;
 - (void) setAccessibilityElementsHidden:(BOOL)a;
 - (void) setAccessibilityViewIsModal:(BOOL)a;
 - (void) setAccessibilityHint:(id)a;
 - (void) setAccessibilityFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setAccessibilityPath:(id)a;
 - (void) setAccessibilityActivationPoint:({CGPoint=dd})a;
 - (void) setAccessibilityTraits:(unsigned long long)a;
 - (void) setIsAccessibilityElement:(BOOL)a;
 - (void) setAccessibilityContainer:(id)a;
 - (void) setAccessibilityLanguage:(id)a;
 - (void) setAccessibilityIdentifier:(id)a;
 - (void) setShouldGroupAccessibilityChildren:(BOOL)a;
 - (void) setAccessibilityNavigationStyle:(long long)a;
 - (void) setAccessibilityLabel:(id)a;
 - (id) accessibilityValue;
 - (void) setAccessibilityValue:(id)a;
 - (id) accessibilityLabel;
 - (BOOL) isAccessibilityElement;
 - (id) accessibilityContainer;
 - (void) awakeFromNib;
 - (void) prepareForInterfaceBuilder;
 - (void) _connectInterfaceBuilderEventConnection:(id)a;
 - (void) _applyTraitStorageRecordsForTraitCollection:(id)a;
 - (void) _setTraitStorageList:(id)a;
 - (id) _traitStorageList;
 - (id) __ivarDescriptionForClass:(Class)a;
 - (id) __methodDescriptionForClass:(Class)a;
 - (id) _ivarDescription;
 - (id) _methodDescription;
 - (id) _shortMethodDescription;
 - (id) _webkit_invokeOnMainThread;
 - (void) releaseOnMainThread;
 - (BOOL) sbs_isPlistableType;
 - (void) encodeWithCAMLWriter:(id)a;
 - (id) CAMLTypeForKey:(id)a;
 - (id) CAMLType;
 - (id) CA_addValue:(id)amultipliedBy:(int)b;
 - (id) CA_interpolateValue:(id)abyFraction:(float)b;
 - (id) CA_roundToIntegerFromValue:(id)a;
 - (double) CA_distanceToValue:(id)a;
 - (id) CA_interpolateValues:(id)ainterpolator:(id)b;
 - (^{Object=^^?{Atomic={?=i}}}) CA_copyRenderValue;
 - (void) CA_prepareRenderValue;
 - (BOOL) bs_performSynchronously:(@?)atimeout:(double)b;
 - (BOOL) bs_isPlistableType;
 - (id) pep_onMainThread;
 - (id) pep_onThread:(id)a;
 - (id) pep_onThread:(id)aimmediateForMatchingThread:(BOOL)b;
 - (id) pep_onOperationQueue:(id)apriority:(long long)b;
 - (id) pep_onMainThreadIfNecessary;
 - (id) pep_onDetachedThread;
 - (id) pep_afterDelay:(double)a;
 - (id) pep_onOperationQueue:(id)a;
 - (id) pep_getInvocation:(^@)a;
 - (Class) classForPortCoder;
 - (id) replacementObjectForPortCoder:(id)a;
 - (BOOL) _conformsToProtocolNamed:(r*)a;
 - (^{objc_method_description=:*}) methodDescriptionForSelector:(SEL)a;
 - (r*) _localClassNameForClass;
 - (void) performSelectorOnMainThread:(SEL)awithObject:(id)bwaitUntilDone:(BOOL)cmodes:(id)d;
 - (void) performSelector:(SEL)aonThread:(id)bwithObject:(id)cwaitUntilDone:(BOOL)dmodes:(id)e;
 - (void) performSelectorOnMainThread:(SEL)awithObject:(id)bwaitUntilDone:(BOOL)c;
 - (void) performSelectorInBackground:(SEL)awithObject:(id)b;
 - (void) performSelector:(SEL)aonThread:(id)bwithObject:(id)cwaitUntilDone:(BOOL)d;
 - (void) performSelector:(SEL)awithObject:(id)bafterDelay:(double)cinModes:(id)d;
 - (void) performSelector:(SEL)awithObject:(id)bafterDelay:(double)c;
 - (void) performSelector:(SEL)aobject:(id)bafterDelay:(double)c;
 - (id) autoContentAccessingProxy;
 - (Class) classForCoder;
 - (id) replacementObjectForCoder:(id)a;
 - (id) awakeAfterUsingCoder:(id)a;
 - (BOOL) _allowsDirectEncoding;
 - (BOOL) implementsSelector:(SEL)a;
 - (Class) classForKeyedArchiver;
 - (id) replacementObjectForKeyedArchiver:(id)a;
 - (id) _implicitObservationInfo;
 - (void) _changeValueForKey:(id)akey:(id)bkey:(id)cusingBlock:(@?)d;
 - (void) _notifyObserversForKeyPath:(id)achange:(id)b;
 - (void) _changeValueForKey:(id)ausingBlock:(@?)b;
 - (void) _willChangeValuesForKeys:(id)a;
 - (void) _didChangeValuesForKeys:(id)a;
 - (^v) observationInfo;
 - (void) setObservationInfo:(^v)a;
 - (void) willChange:(unsigned long long)avaluesAtIndexes:(id)bforKey:(id)c;
 - (void) didChange:(unsigned long long)avaluesAtIndexes:(id)bforKey:(id)c;
 - (void) willChangeValueForKey:(id)awithSetMutation:(unsigned long long)busingObjects:(id)c;
 - (void) didChangeValueForKey:(id)awithSetMutation:(unsigned long long)busingObjects:(id)c;
 - (void) willChangeValueForKey:(id)a;
 - (void) didChangeValueForKey:(id)a;
 - (void) _addObserver:(id)aforProperty:(id)boptions:(unsigned long long)ccontext:(^v)d;
 - (void) removeObserver:(id)aforKeyPath:(id)b;
 - (void) _removeObserver:(id)aforProperty:(id)b;
 - (void) addObserver:(id)aforKeyPath:(id)boptions:(unsigned long long)ccontext:(^v)d;
 - (void) removeObserver:(id)aforKeyPath:(id)bcontext:(^v)c;
 - (void) observeValueForKeyPath:(id)aofObject:(id)bchange:(id)ccontext:(^v)d;
 - (BOOL) _isKVOA;
 - (id) valueForUndefinedKey:(id)a;
 - (void) setValue:(id)aforUndefinedKey:(id)b;
 - (void) setNilValueForKey:(id)a;
 - (void) setValue:(id)aforKeyPath:(id)b;
 - (BOOL) validateValue:(N^@)aforKeyPath:(id)berror:(o^@)c;
 - (BOOL) validateValue:(N^@)aforKey:(id)berror:(o^@)c;
 - (id) mutableArrayValueForKeyPath:(id)a;
 - (id) mutableArrayValueForKey:(id)a;
 - (id) mutableOrderedSetValueForKeyPath:(id)a;
 - (id) mutableOrderedSetValueForKey:(id)a;
 - (id) mutableSetValueForKeyPath:(id)a;
 - (id) mutableSetValueForKey:(id)a;
 - (void) setValue:(id)aforKey:(id)b;
 - (id) dictionaryWithValuesForKeys:(id)a;
 - (id) valueForKey:(id)a;
 - (id) valueForKeyPath:(id)a;
 - (void) setValuesForKeysWithDictionary:(id)a;
 - (id) replacementObjectForArchiver:(id)a;
 - (Class) classForArchiver;
 - (unsigned long long) _cfTypeID;
 - (BOOL) isNSValue__;
 - (BOOL) isNSString__;
 - (BOOL) isNSNumber__;
 - (BOOL) isNSArray__;
 - (BOOL) isNSDictionary__;
 - (BOOL) isNSData__;
 - (BOOL) isNSDate__;
 - (BOOL) isNSOrderedSet__;
 - (BOOL) isNSSet__;
 - (BOOL) isNSTimeZone__;
 - (void) doesNotRecognizeSelector:(SEL)a;
 - (id) description;
 - (id) methodSignatureForSelector:(SEL)a;
 - (void) __dealloc_zombie;
 - (id) __retain_OA;
 - (Vv) __release_OA;
 - (id) __autorelease_OA;
 - (BOOL) ___tryRetain_OA;
 - (id) _copyDescription;
 - (^{_NSZone=}) zone;
 - (void) doesNotRecognizeSelector:(SEL)a;
 - (id) description;
 - (BOOL) isFault;
 - (id) retain;
 - (Vv) release;
 - (id) autorelease;
 - (unsigned long long) retainCount;
 - (void) dealloc;
 - (id) copy;
 - (void) finalize;
 - (void) forwardInvocation:(id)a;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (BOOL) retainWeakReference;
 - (BOOL) allowsWeakReference;
 - (BOOL) isKindOfClass:(Class)a;
 - (id) mutableCopy;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (BOOL) respondsToSelector:(SEL)a;
 - (id) self;
 - (id) performSelector:(SEL)a;
 - (id) performSelector:(SEL)awithObject:(id)b;
 - (BOOL) conformsToProtocol:(id)a;
 - (id) methodSignatureForSelector:(SEL)a;
 - (id) forwardingTargetForSelector:(SEL)a;
 - (^?) methodForSelector:(SEL)a;
 - (Class) class;
 - (id) debugDescription;
 - (id) init;
 - (BOOL) isProxy;
 - (BOOL) isMemberOfClass:(Class)a;
 - (Class) superclass;
 - (id) performSelector:(SEL)awithObject:(id)bwithObject:(id)c;


@end
