//js code writing
Use ?? for default when 0, '', false are valid values.
const retries = config.retries ?? 3;   // if undefined/null → 3; else keep 0
const username = user.name ?? "Guest"; // keeps '' if explicitly set

Use || when any falsy should use fallback.
const displayName = user.nickname || "N/A";

Use && for conditional expressions/JSX rendering.
const status = isLoggedIn && "Welcome back!";

Use optional chaining ?. to call/access safely.
const city = user.address?.city; // avoids crash if address is null

Prefer default params for function defaults.
function calcTotal(amount, tax = 0.18) {
  return amount + amount * tax;
}
