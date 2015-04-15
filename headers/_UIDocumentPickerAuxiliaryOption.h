
@protocol NSSecureCoding;
@interface _UIDocumentPickerAuxiliaryOption : NSObject <NSSecureCoding> {

    BOOL _newlyAdded;
    NSString* _title;
    UIImage* _image;
    NSString* _identifier;
    @? _handler;
    unsigned long long _order;
}
@property (nonatomic, copy, readwrite) NSString* title;
@property (nonatomic, retain, readwrite) UIImage* image;
@property (nonatomic, copy, readwrite) NSString* identifier;
@property (nonatomic, copy, readwrite) NSNumber* handler;
@property (nonatomic, assign, readwrite) NSNumber* order;
@property (nonatomic, assign, readwrite, getter=isNewlyAdded) NSNumber* newlyAdded;
 + (BOOL) supportsSecureCoding;

 - (id) title;
 - (void) setTitle:(id)a;
 - (void) dealloc;
 - (void) setOrder:(unsigned long long)a;
 - (unsigned long long) order;
 - (BOOL) isNewlyAdded;
 - (void) setNewlyAdded:(BOOL)a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) identifier;
 - (void) setIdentifier:(id)a;
 - (void) setImage:(id)a;
 - (@?) handler;
 - (void) setHandler:(@?)a;
 - (id) image;


@end
