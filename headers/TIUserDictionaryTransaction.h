
@protocol NSSecureCoding;
@interface TIUserDictionaryTransaction : NSObject <NSSecureCoding> {

    TIUserDictionaryEntryValue* _valueToDelete;
    TIUserDictionaryEntryValue* _valueToInsert;
}
@property (nonatomic, retain, readwrite) TIUserDictionaryEntryValue* valueToDelete;
@property (nonatomic, retain, readwrite) TIUserDictionaryEntryValue* valueToInsert;
 + (BOOL) supportsSecureCoding;

 - (id) description;
 - (void) dealloc;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) valueToDelete;
 - (id) valueToInsert;
 - (void) setValueToDelete:(id)a;
 - (void) setValueToInsert:(id)a;


@end
