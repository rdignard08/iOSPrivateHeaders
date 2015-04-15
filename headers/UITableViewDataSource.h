
@protocol UITableViewDataSource, UITableViewDelegate, NSCoding;
@interface UITableViewDataSource : NSObject <UITableViewDataSource, UITableViewDelegate, NSCoding> {

    @"NSArray" _sections;
}
@property (nonatomic, copy, readwrite) NSArray* sections;
 + (id) staticDataSourceWithSections:(id)a;

 - (void) dealloc;
 - (double) tableView:(id)aheightForRowAtIndexPath:(id)b;
 - (double) tableView:(id)aheightForHeaderInSection:(long long)b;
 - (double) tableView:(id)aheightForFooterInSection:(long long)b;
 - (id) tableView:(id)aviewForHeaderInSection:(long long)b;
 - (id) tableView:(id)aviewForFooterInSection:(long long)b;
 - (long long) tableView:(id)aeditingStyleForRowAtIndexPath:(id)b;
 - (long long) tableView:(id)aindentationLevelForRowAtIndexPath:(id)b;
 - (long long) tableView:(id)anumberOfRowsInSection:(long long)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (long long) numberOfSectionsInTableView:(id)a;
 - (id) tableView:(id)atitleForHeaderInSection:(long long)b;
 - (id) tableView:(id)atitleForFooterInSection:(long long)b;
 - (BOOL) tableView:(id)acanEditRowAtIndexPath:(id)b;
 - (BOOL) tableView:(id)acanMoveRowAtIndexPath:(id)b;
 - (void) setSections:(id)a;
 - (id) sections;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
