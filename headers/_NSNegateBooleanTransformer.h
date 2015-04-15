
@interface _NSNegateBooleanTransformer : _NSSharedValueTransformer {

}
 + (Class) transformedValueClass;

 - (id) transformedValue:(id)a;
 - (BOOL) _isBooleanTransformer;
 - (id) description;


@end
