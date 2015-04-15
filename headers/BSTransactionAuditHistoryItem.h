
@interface BSTransactionAuditHistoryItem : NSObject {

    @"NSDate" _date;
    @"NSString" _category;
    @"NSString" _description;
}
 + (id) itemWithDescription:(id)a;
 + (id) itemWithDescriptionWithFormat:(id)a;

 - (id) description;
 - (void) dealloc;
 - (id) initWithDescription:(id)a;
 - (id) _timeFormatter;


@end
