
@protocol UITableViewDataSource, UITableViewDelegate, NSCoding;
@interface UITableViewDataSource : NSObject <UITableViewDataSource, UITableViewDelegate, NSCoding> {

    @"NSArray" _sections;
}
@property (nonatomic, copy, readwrite) NSArray* sections;
 + (id) staticDataSourceWithSections:(id)a;

 - (void) dealloc;
 - (d) tableView:(id)aheightForRowAtIndexPath:(id)b;
 - (d) tableView:(id)aheightForHeaderInSection:(q)b;
 - (d) tableView:(id)aheightForFooterInSection:(q)b;
 - (id) tableView:(id)aviewForHeaderInSection:(q)b;
 - (id) tableView:(id)aviewForFooterInSection:(q)b;
 - (q) tableView:(id)aeditingStyleForRowAtIndexPath:(id)b;
 - (q) tableView:(id)aindentationLevelForRowAtIndexPath:(id)b;
 - (q) tableView:(id)anumberOfRowsInSection:(q)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (q) numberOfSectionsInTableView:(id)a;
 - (id) tableView:(id)atitleForHeaderInSection:(q)b;
 - (id) tableView:(id)atitleForFooterInSection:(q)b;
 - (BOOL) tableView:(id)acanEditRowAtIndexPath:(id)b;
 - (BOOL) tableView:(id)acanMoveRowAtIndexPath:(id)b;
 - (void) setSections:(id)a;
 - (id) sections;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
