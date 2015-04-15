
@interface _UIAssociationTable : NSObject {

    NSMapTable _leftToRightHashTables;
    NSMapTable _rightToLeftHashTables;
}

 - (id) description;
 - (void) dealloc;
 - (BOOL) isEmpty;
 - (id) initWithLeftValueOptions:(unsigned long long)arightValueOptions:(unsigned long long)b;
 - (id) rightValueEnumerableForLeftValue:(id)a;
 - (void) registerAssociationWithLeftValue:(id)arightValue:(id)b;
 - (void) unregisterAssociationWithLeftValue:(id)arightValue:(id)b;
 - (BOOL) hasRightValuesForLeftValue:(id)a;
 - (id) leftValuesForRightValue:(id)a;
 - (BOOL) hasLeftValuesForRightValue:(id)a;
 - (id) leftValueEnumerable;
 - (id) leftValues;
 - (id) rightValues;
 - (id) rightValueEnumerable;
 - (id) rightValuesForLeftValue:(id)a;
 - (id) leftValueEnumerableForRightValue:(id)a;


@end
