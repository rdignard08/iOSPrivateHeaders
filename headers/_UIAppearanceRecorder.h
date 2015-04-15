
@interface _UIAppearanceRecorder : NSObject {

    NSString* _classNameToRecord;
    Class _superclassToRecord;
    NSArray* _containerClassNames;
    NSMutableArray* _customizations;
    NSArray* _unarchivedCustomizations;
}
@property (nonatomic, assign, readonly) NSData* _serializedRepresentation;
@property (nonatomic, copy, readwrite, setter=_setClassNameToRecord:) NSString* _classNameToRecord;
@property (nonatomic, assign, readwrite, setter=_setSuperclassToRecord:) NSObject* _superclassToRecord;
@property (nonatomic, copy, readwrite, setter=_setContainerClassNames:) NSArray* _containerClassNames;
 + (id) _sharedAppearanceRecorderForClass:(Class)awhenContainedIn:(id)b;
 + (id) _sharedAppearanceRecorder;
 + (id) _sharedAppearanceRecorderForClassNamed:(id)asuperclass:(Class)bwhenContainedIn:(id)c;

 - (id) initWithSerializedRepresentation:(id)a ;
 - (void) dealloc;
 - (void) forwardInvocation:(id)a ;
 - (id) methodSignatureForSelector:(SEL)a ;
 - (void) _recordInvocation:(id)a withClassName:(id)b containerClassNames:(id)c traitCollection:(id)d selectorString:(id)e forRemoteProcess:(BOOL)f ;
 - (void) _importCustomizations:(id)a withArchiveVersion:(long long)b ;
 - (void) _setClassNameToRecord:(id)a ;
 - (void) _setSuperclassToRecord:(Class)a ;
 - (void) _setContainerClassNames:(id)a ;
 - (id) _classNameToRecord;
 - (void) _applyCustomizations;
 - (id) _serializedRepresentation;
 - (Class) _superclassToRecord;
 - (id) _containerClassNames;
 - (id) init;


@end
