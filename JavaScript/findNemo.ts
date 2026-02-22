function findNemo(arr: Array<string>) {
  const t0 = performance.now();

  for (let i = 0; i < arr.length; i++) {
    if (arr[i] === "NEMO") {
      console.log("Found NEMO!!!!");
    }
  }

  const t1 = performance.now();
  console.log(`Finding NEMO takes ${t1 - t0} milliseconds`);
}

const largeArray = new Array(100).fill("nemo");
largeArray.push("NEMO");

findNemo(largeArray);