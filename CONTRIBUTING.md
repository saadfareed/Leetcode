 # Sync Forked Repo from Upstream Repo


1. Add the original repository as an upstream repository
```javascript
$ git remote add upstream https://github.com/[Original Owner Username]/[Original Repository].git
```
Hence, in this repository it would be
```javascript
$ git remote add upstream https://github.com/saadfareed/Leetcode.git
```

2. Fetch all the changes from the repository. Note that commits to the original repository will be stored in a local branch called, upstream/master
```javascript
$ git fetch upstream
```

3. Make sure that you are on your fork's master or working branch
```javascript
$ git checkout [working branch]
```
For example,
```javascript
$ git checkout master
```

4. Merge the changes from the upstream/master into  your local master or working branch. This will sync the fork's master branch with the upstream repository without losing your local changes. If you have made any changes that create conflict, you will have to resolve the conflict before you can complete the merge
```javascript
$ git merge upstream/master
```

5. At this point, your local branch is synced with the upstream/master branch. In order to update the remote branch in Github, you need to push your changes
