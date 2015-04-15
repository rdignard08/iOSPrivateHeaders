
@protocol NSCopying, NSMutableCopying, NSSecureCoding;
@interface UIUserNotificationCategory : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

    @"NSString" _identifier;
    @"NSDictionary" _actionsByContext;
}
@property (nonatomic, copy, readwrite) NSString* identifier;
@property (nonatomic, copy, readwrite) NSDictionary* actionsByContext;
 + (BOOL) supportsSecureCoding;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (id) actionsForContext:(Q)a;
 - (Q) _maximumActionsForContext:(Q)a;
 - (id) actionsByContext;
 - (void) setActionsByContext:(id)a;
 - (id) initWithIdentifier:(id)aactionsByContext:(id)b;
 - (id) validatedCategory;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) identifier;
 - (void) setIdentifier:(id)a;
 - (id) actions;


@end
