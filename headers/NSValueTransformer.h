
@interface NSValueTransformer : NSObject {

}
 + (id) _transformerRegistry;
 + (void) setValueTransformer:(id)aforName:(id)b;
 + (BOOL) allowsReverseTransformation;
 + (id) valueTransformerForName:(id)a;
 + (id) valueTransformerNames;
 + (Class) transformedValueClass;

 - (id) transformedValue:(id)a;
 - (id) reverseTransformedValue:(id)a;


@end
