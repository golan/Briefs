//
//  BFSceneManager.h
//  Briefs
//
//  Created by Rob Rhyne on 7/17/09.
//  Copyright Digital Arch Design, 2009. See LICENSE file for details.
//

#import <Foundation/Foundation.h>
#import "BFScene.h"

@interface BFSceneManager : NSObject 
{
	NSDictionary		*source;
	NSMutableArray	*scene_graph;
	NSArray					*scene_desc;
}

@property (nonatomic, retain) NSDictionary		*source;
@property (nonatomic, retain) NSMutableArray	*scene_graph;
@property (nonatomic, retain) NSArray					*scene_desc;


- (id) initWithPathToDictionary:(NSString*)path;


/** Scene Management */
- (int) totalNumberOfScenes;
- (BFScene*) openingScene;
- (BFScene*) sceneByNumber:(int)index;




@end
