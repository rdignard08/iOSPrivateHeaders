
@interface AFQueryStringPair : NSObject {

    id _field;
    id _value;
}
@property (nonatomic, retain, readwrite) NSNumber* field;
@property (nonatomic, retain, readwrite) NSNumber* value;

 - (void) setField:(id)a;
 - (id) field;
 - (id) initWithField:(id)avalue:(id)b;
 - (id) URLEncodedStringValueWithEncoding:(unsigned long long)a;
 - (void) .cxx_destruct;
 - (void) setValue:(id)a;
 - (id) value;


@end
