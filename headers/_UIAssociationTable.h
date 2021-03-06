
@interface _UIAssociationTable : NSObject {

    NSMapTable* _leftToRightHashTables;
    NSMapTable* _rightToLeftHashTables;
}

 - (id) description;
 - (void) dealloc;
 - (BOOL) isEmpty;
 - (id) initWithLeftValueOptions:(unsigned long long)a rightValueOptions:(unsigned long long)b ;
 - (id) rightValueEnumerableForLeftValue:(id)a ;
 - (void) registerAssociationWithLeftValue:(id)a rightValue:(id)b ;
 - (void) unregisterAssociationWithLeftValue:(id)a rightValue:(id)b ;
 - (BOOL) hasRightValuesForLeftValue:(id)a ;
 - (id) leftValuesForRightValue:(id)a ;
 - (BOOL) hasLeftValuesForRightValue:(id)a ;
 - (id) leftValueEnumerable;
 - (id) leftValues;
 - (id) rightValues;
 - (id) rightValueEnumerable;
 - (id) rightValuesForLeftValue:(id)a ;
 - (id) leftValueEnumerableForRightValue:(id)a ;


@end
