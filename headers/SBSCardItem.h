
@protocol NSCopying, NSSecureCoding;
@interface SBSCardItem : NSObject <NSCopying, NSSecureCoding> {

    BOOL _requiresPasscode;
    @"NSString" _identifier;
    @"NSData" _iconData;
    @"NSString" _title;
    @"NSString" _body;
    @"NSString" _bundleName;
    @"NSData" _attachmentData;
    @"NSDictionary" _userInfo;
    @"UIImage" _thumbnail;
}
@property (nonatomic, copy, readwrite) NSString* identifier;
@property (nonatomic, copy, readwrite) NSData* iconData;
@property (nonatomic, copy, readwrite) NSString* title;
@property (nonatomic, copy, readwrite) NSString* body;
@property (nonatomic, assign, readwrite) NSNumber* requiresPasscode;
@property (nonatomic, copy, readwrite) NSString* bundleName;
@property (nonatomic, copy, readwrite) NSData* attachmentData;
@property (nonatomic, copy, readwrite) NSDictionary* userInfo;
@property (nonatomic, copy, readwrite) UIImage* thumbnail;
 + (BOOL) supportsSecureCoding;

 - (id) title;
 - (void) setTitle:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (id) userInfo;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (id) sortDate;
 - (void) setThumbnail:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) setUserInfo:(id)a;
 - (id) identifier;
 - (void) setIdentifier:(id)a;
 - (id) thumbnail;
 - (void) setIconData:(id)a;
 - (void) setBody:(id)a;
 - (void) setRequiresPasscode:(BOOL)a;
 - (void) setBundleName:(id)a;
 - (id) initWithIdentifier:(id)aiconData:(id)btitle:(id)cbody:(id)drequiresPasscode:(BOOL)ebundleName:(id)fattachmentData:(id)guserInfo:(id)h;
 - (id) initWithIdentifier:(id)aiconData:(id)btitle:(id)cbody:(id)drequiresPasscode:(BOOL)ebundleName:(id)fuserInfo:(id)g;
 - (id) iconData;
 - (id) body;
 - (BOOL) requiresPasscode;
 - (id) bundleName;
 - (id) attachmentData;
 - (void) setAttachmentData:(id)a;
 - (id) initWithIdentifier:(id)aiconData:(id)btitle:(id)cbody:(id)dclassification:(long long)ebundleName:(id)fuserInfo:(id)g;


@end
