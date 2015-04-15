
@protocol NSISVariableDelegate;
@interface NSISInlineStorageVariable : NSISVariable <NSISVariableDelegate> {

    @"NSString" _name;
    i _valueRestriction;
    BOOL _shouldBeMinimized;
}

 - (void) nsis_valueOfVariable:(id)adidChangeInEngine:(id)b;
 - (id) nsis_descriptionOfVariable:(id)a;
 - (BOOL) nsis_shouldIntegralizeVariable:(id)a;
 - (BOOL) nsis_valueOfVariableIsUserObservable:(id)a;
 - (i) valueRestriction;
 - (id) markedConstraint;
 - (BOOL) shouldBeMinimized;
 - (void) setValueRestriction:(i)a;
 - (void) setShouldBeMinimized:(BOOL)a;
 - (Vv) dealloc;
 - (id) name;
 - (void) setName:(id)a;


@end
