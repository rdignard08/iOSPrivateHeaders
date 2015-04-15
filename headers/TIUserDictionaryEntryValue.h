
@protocol NSSecureCoding, TIUserDictionaryEntry;
@interface TIUserDictionaryEntryValue : NSObject <NSSecureCoding, TIUserDictionaryEntry> {

    NSString* _phrase;
    NSString* _shortcut;
    NSNumber* _timestamp;
}
@property (nonatomic, copy, readwrite) NSString* phrase;
@property (nonatomic, copy, readwrite) NSString* shortcut;
@property (nonatomic, retain, readwrite) NSNumber* timestamp;
 + (BOOL) supportsSecureCoding;
 + (id) valueWithEntry:(id)a;

 - (id) description;
 - (void) dealloc;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) timestamp;
 - (id) phrase;
 - (void) setPhrase:(id)a ;
 - (id) shortcut;
 - (void) setShortcut:(id)a ;
 - (void) setTimestamp:(id)a ;
 - (BOOL) matchesEntry:(id)a ;
 - (id) shortcutForSorting;


@end
