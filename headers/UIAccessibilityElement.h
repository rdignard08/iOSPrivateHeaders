
@protocol UIAccessibilityIdentification;
@interface UIAccessibilityElement : NSObject <UIAccessibilityIdentification> {

}
@property (nonatomic, assign, readwrite) NSNumber* accessibilityContainer;
@property (nonatomic, copy, readwrite) NSString* accessibilityIdentifier;

 - (id) initWithAccessibilityContainer:(id)a ;


@end
