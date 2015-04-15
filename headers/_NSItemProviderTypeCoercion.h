
@interface _NSItemProviderTypeCoercion : NSObject {

    id _value;
    Class _targetClass;
}
@property (nonatomic, retain, readwrite) NSNumber* value;
@property (nonatomic, copy, readwrite) NSObject* targetClass;
 + (id) typeCoercionForValue:(id)atargetClass:(Class)b;
 + (SEL) selectorForCoercionFromValue:(id)atoClass:(Class)b;
 + (id) coercionClassStringFromClass:(Class)a;

 - (void) dealloc;
 - (BOOL) shouldCoerceForCoding;
 - (id) coerceValueAndReturnError:(^@)a ;
 - (void) setValue:(id)a ;
 - (void) setTargetClass:(Class)a ;
 - (id) value;
 - (Class) targetClass;
 - (id) _NSItemProviderTypeCoercion_coercedNSDataValueFromNSURLValue:(id)a error:(^@)b ;
 - (id) _NSItemProviderTypeCoercion_coercedNSFileWrapperValueFromNSURLValue:(id)a error:(^@)b ;
 - (id) _NSItemProviderTypeCoercion_coercedNSFileWrapperValueFromNSDataValue:(id)a error:(^@)b ;


@end
