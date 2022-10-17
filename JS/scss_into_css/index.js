const path = require('path');
const globby = require('globby');
const {writeFileSync,readFileSync} = require('fs');

const dir =  __dirname.replace(/\\/g, '/');
const findPath = `${dir}/lib/**/!(*.d).{ts,tsx,js,jsx}`
const files = globby
  .sync(findPath, { dot: true })
  .map((x) => path.resolve(x));
console.log({ files: files.length });
let changedFileCount = 0;
const transToCSSCount = 0;
const filesLen = files.length;
for (let i = 0; i < filesLen; i += 1) {
  const file = files[i];
  const content = readFileSync(file, 'utf-8');
  if (content.includes('scss')) {
    const changedValue = content.replace(/scss/g, 'css');
    changedFileCount += 1;
    writeFileSync(file, changedValue, 'utf8');
  }
}
console.log(
  `Replaced ${transToCSSCount} styles with suffix css in ${changedFileCount} files`
);