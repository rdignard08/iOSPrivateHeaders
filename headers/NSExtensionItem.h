
@protocol NSCopying, NSSecureCoding;
@interface NSExtensionItem : NSObject <NSCopying, NSSecureCoding> {

    NSMutableDictionary _userInfo;
}
@property (nonatomic, copy, readwrite) NSAttributedString* attributedTitle;
@property (nonatomic, copy, readwrite) NSAttributedString* attributedContentText;
@property (nonatomic, copy, readwrite) NSArray* attachments;
@property (nonatomic, copy, readwrite) NSDictionary* userInfo;
 + (BOOL) supportsSecureCoding;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (id) userInfo;
 - (void) setAttributedTitle:(id)a;
 - (id) attributedTitle;
 - (void) setAttachments:(id)a;
 - (void) setAttributedContentText:(id)a;
 - (id) _matchingDictionaryRepresentation;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) setUserInfo:(id)a;
 - (id) attachments;
 - (id) attributedContentText;


@end
