
@interface _UIAppearance : NSObject {

    NSArray* _containerList;
    NSMutableArray* _appearanceInvocations;
    NSMapTable* _invocationSources;
    NSMutableDictionary* _resettableInvocations;
    _UIAppearanceCustomizableClassInfo* _customizableClassInfo;
}
@property (nonatomic, assign, readonly) _UIAppearanceCustomizableClassInfo* _customizableClassInfo;
@property (nonatomic, retain, readwrite, setter=_setResettableInvocations:) NSMutableDictionary* _resettableInvocations;
 + (void) _setInvalidatesViewsOnAppearanceChange:(BOOL)a;
 + (id) _appearanceForClass:(Class)awithContainerList:(id)b;
 + (BOOL) _hasAnyCustomizations;
 + (BOOL) _hasCustomizationsForClass:(Class)aguideClass:(Class)b;
 + (void) _applyInvocationsTo:(id)awindow:(id)b;
 + (void) _applyInvocationsTo:(id)awindow:(id)bmatchingSelector:(SEL)c;
 + (id) _windowsForSource:(id)a;
 + (id) _recorderForSource:(id)a;
 + (id) _rootAppearancesNode;
 + (void) _removeInvocationsForSource:(id)a;
 + (id) appearancesAtNode:(id)awithObject:(id)b;
 + (id) _appearanceWithClassInfo:(id)acontainerList:(id)b;
 + (id) _appearanceNodeForClassInfo:(id)acontainerList:(id)b;
 + (id) _newAppearanceWithClassInfo:(id)acontainerList:(id)b;
 + (id) _currentAppearanceSource;
 + (id) _pendingRecordInvocationsForSource:(id)a;
 + (void) _setCurrentAppearanceSource:(id)a;
 + (void) _addWindow:(id)aforSource:(id)b;
 + (void) _removeWindow:(id)aforSource:(id)b;
 + (id) _recordersExcludingSource:(id)awithWindow:(id)b;

 - (id) description;
 - (void) dealloc;
 - (void) forwardInvocation:(id)a ;
 - (id) methodSignatureForSelector:(SEL)a ;
 - (id) _traitCollection;
 - (id) _resettableInvocationsCreateIfNecessary;
 - (BOOL) _isValidAppearanceForCustomizableObject:(id)a ;
 - (void) _removeInvocationsForSource:(id)a ;
 - (void) updateResettableSelectorsWithInvocation:(id)a removeSelector:(BOOL)b ;
 - (void) _invalidateAppearanceInWindow:(id)a ;
 - (id) _appearanceInvocations;
 - (id) _resettableInvocations;
 - (void) _setResettableInvocations:(id)a ;
 - (id) _customizableClassInfo;


@end
